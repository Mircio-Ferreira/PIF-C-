//Todo ano, o Spotify cria uma lista personalizada para cada usuário com base nas músicas mais ouvidas naquele ano. 
//O aplicativo constrói esta lista com base no tempo total gasto ouvindo cada música. 
//Suponha a seguinte estrutura autoreferenciada com os dados da música:
//
//struct musica{
//		char nome[50];
//		char artista[100];
//		char album[50];
//		int minutos;
//		struct musica *next;
//};
//
//Onde a variável minutos representa o tempo total que o usuário ouviu determinada música 
//(ou seja, a soma do tempo de todas as execuções da música). Esta lista está ordenada por ordem alfabética do nome do 
//artista e não há nomes duplicados de músicas. Implemente o seguinte: 
//
//Função para encontrar a  música mais ouvida no ano. Sua função deve imprimir o nome da música, artista, e álbum (0.5);
//Função para encontrar  o tamanho total da lista (ou seja, quantas músicas diferentes o usuário ouviu naquele ano) (0.5);
//Função para encontrar o tempo total que usuário passou no aplicativo ouvindo músicas (0.5);