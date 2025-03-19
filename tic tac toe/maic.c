#include <stdio.h>

#define X 'X'
#define O 'O'

// #define ROWS 200000
// #define COLISIONS 5

// int memoIdx[ROWS];

char board[9];
char player = X;

void switchPlayer(){
    player = player == X ? O : X;
}

void initBoard(){
    for (int i = 0; i < 9; i++){
        board[i] = ' ';
    }
}

int putPlayer(int idx){
    if (idx < 0 || idx >= 9 || board[idx] != ' '){
        return 0;
    }
    board[idx] = player;
    switchPlayer();
    return 1;
}

void put(int idx){
    board[idx] = player;
    switchPlayer();
}

void unmake(int idx){
    board[idx] = ' ';
    switchPlayer();
}

char checkWin(){
    int patterns[] = {
        0, 1, 2,
        3, 4, 5,
        6, 7, 8,
        0, 3, 6,
        1, 4, 7,
        2, 5, 8,
        0, 4, 8,
        2, 4, 6
    };

    for (int i = 0; i < 24; i+=3){
        char start = board[patterns[i]];
        if (start == ' ')
            continue;
        for (int j = 1; j < 3; j++){
            if (board[patterns[i + j]] != start){
                start = 0;
                break;
            }
        }
        if (start)
            return start;
    }
    return 0;
}

void show(){
    char output[25];
    int idx = 0;
    int idxBoard = 0;
    for (int i = 0; i < 3; i++){
        output[idx++] = '|';
        for (int j = 0; j < 3; j++){
            output[idx++] = board[idxBoard++];
            output[idx++] = '|';
        }
        output[idx++] = '\n';
    }
    output[idx] = '\0';
    printf("\n%s", output);
}

int getFree(int arr[]){
    int idx = 0;
    for (int i = 0; i < 9; i++){
        if(board[i] == ' '){
            arr[idx++] = i;
        }
    }
    return idx;
}

typedef struct
{
    int idx;
    int score;
} Move;

Move minimax(int isMax, int alpha, int beta){
    Move move;

    char w = checkWin();

    if (w == 'X'){
        move.score = 1;
        return move;
    }

    if (w == 'O'){
        move.score = -1;
        return move;
    }

    int freeSquares[9];
    int freeLen = getFree(freeSquares);

    if(freeLen == 0){
        move.score = 0;
        return move;
    }

    int bestScore = isMax ? -1 : 1;
    int bestIdx;

    for (int i = 0; i < freeLen; i++){
        int idx = freeSquares[i];
        put(idx);
        int score = minimax(!isMax, alpha, beta).score;
        unmake(idx);

        if (isMax){
            if (score > bestScore){
                bestScore = score;
                bestIdx = idx;
            }
            alpha = (score > alpha) ? score : alpha;
        } else {
            if (score < bestScore){
                bestScore = score;
                bestIdx = idx;
            }
            beta = (score < beta) ? score : beta;
        }
        if (beta <= alpha)
            break;
    }
    move.score = bestScore;
    move.idx = bestIdx;

    return move;
}

int bestMove(){
    int isMax = player == X;
    return minimax(isMax, -1, 1).idx;
}

int main(){
    initBoard();
    char w = 0;
    while (!w){
        put(bestMove());
        w = checkWin();
        show();
        if (w != 0)
            break;
        int valid = 0;
        while (!valid){
            printf("\nEscolha uma casa para jogar: ");
            int idx;
            scanf("%d", &idx);
            valid = putPlayer(idx);
            show();
            if (!valid){
                printf("\nLance invalido\n");
            }
        } 
        w = checkWin();
    }
    return 0;
}