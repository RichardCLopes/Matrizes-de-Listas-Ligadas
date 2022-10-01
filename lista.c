#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

void CM(ListaMatrizes **matrizes, char nome[], int i, int j) {
	if ((*matrizes) == NULL) {
		(*matrizes) = (ListaMatrizes *)malloc(sizeof(ListaMatrizes));

		strcpy((*matrizes)->nome, nome);
		(*matrizes)->numeroLinhas = i;
		(*matrizes)->numeroColunas = j;
		(*matrizes)->prox = NULL;
		
		constroi_matriz(&((*matrizes)->matriz), i, j);
	}
	else {
		ListaMatrizes *backup = *matrizes;

		(*matrizes) = (ListaMatrizes *)malloc(sizeof(ListaMatrizes));

		strcpy((*matrizes)->nome, nome);
		(*matrizes)->numeroLinhas = i;
		(*matrizes)->numeroColunas = j;
		(*matrizes)->prox = backup;

		constroi_matriz(&((*matrizes)->matriz), i, j);
	}
}

void DM(ListaMatrizes **matrizes, char nome[]) {
	if ((*matrizes) != NULL) {
		if (strcmp((*matrizes)->nome, nome) == 0) {
			(*matrizes) = (*matrizes)->prox;
		}
		else {
			DM(&(*matrizes)->prox, nome);
		}
	}
}

void AE(ListaMatrizes *matrizes, char nome[], int i, int j, float valor) {
	float **matriz = encontra_bloco_matriz(matrizes, nome);

	matriz[i][j] = valor;
}

//Funções Auxiliares
void constroi_matriz(float ***matriz, int i, int j) {
	int k, si, sj;

	(*matriz) = malloc(i * sizeof(float *));
	
	for (k = 0; k < i; k++) {
		(*matriz)[k] = malloc(j * sizeof(float));
	}

	for (si = 0; si < i; si++) {
		for (sj = 0; sj < j; sj++) {
			(*matriz)[si][sj] = 0;
		}
	}
}

BlocoMatriz* encontra_bloco_matriz(ListaMatrizes *matrizes, char nome[]) {
	if (matrizes == NULL) {
		return NULL;
	}
	if (strcmp(matrizes->nome, nome) == 0) {
		return matrizes->matriz;
	}
	else {
		return encontra_bloco_matriz(matrizes->prox, nome);
	}
}
