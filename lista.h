typedef struct BMatriz BlocoMatriz;
typedef struct LMatrizes ListaMatrizes;

void CM(ListaMatrizes **matrizes, char nome[], int i, int j);
void DM(ListaMatrizes **matrizes, char nome[]);
void AE(ListaMatrizes *matrizes, char nome[], int i, int j, float valor);

//Funções Auxiliares
void constroi_matriz(float ***matriz, int i, int j);
BlocoMatriz* encontra_bloco_matriz(ListaMatrizes *matrizes, char nome[]);
