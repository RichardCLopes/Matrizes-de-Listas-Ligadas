typedef struct BMatriz BlocoMatriz;
typedef struct LMatrizes ListaMatrizes;

struct LMatrizes {
	char nome[100];
	int numeroLinhas;
	int numeroColunas;
	float **matriz;
	ListaMatrizes *prox;
};

//void CM(ListaMatrizes **matrizes, char nome[], int i, int j);
void IM(ListaMatrizes *matrizes, char nome[]);
void AL(ListaMatrizes *matrizes, char nome[], int i);
void AC(ListaMatrizes *matrizes, char nome[], int j);
void TM(ListaMatrizes **matrizes, char nome[], char nomeresultante[]);
void SM(ListaMatrizes **matrizes, char nome[], char nome2[], char nomeresultante[]);
void DV(ListaMatrizes **matrizes, char nome[], char nome2[], char nomeresultante[]);
void MM(ListaMatrizes **matrizes, char nome[], char nome2[], char nomeresultante[]);
void ME(ListaMatrizes **matrizes, char nome[], char nome2[], char nomeresultante[]);

//Funções Auxiliares
int verifica_matriz_existe(ListaMatrizes *matrizes, char nome[]);
int verifica_coordenadas(ListaMatrizes *matrizes, char nome[], int i, int j);
int verifica_matriz_zero(ListaMatrizes *matrizes, char nome[]);
ListaMatrizes* encontra_matriz(ListaMatrizes *matrizes, char nome[]);
