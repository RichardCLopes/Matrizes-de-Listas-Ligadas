#include <stdlib.h>
#include <stdio.h>
#include "matriz.h"
#include "lista.h"

void TM(ListaMatrizes **matrizes, char nome[], char nomeresultante[]) {
	ListaMatrizes *backup = *matrizes;
	ListaMatrizes *matriz = encontra_matriz(backup, nome);
	
	CM(&(*matrizes), nomeresultante, matriz->numeroColunas, matriz->numeroLinhas);
	backup = *matrizes;
	ListaMatrizes *matrizresultante = encontra_matriz(backup, nomeresultante);

	int i, j;

	for (i = 0; i < matriz->numeroLinhas; i++) {
		for (j = 0; j < matriz->numeroColunas; j++) {
			matrizresultante->matriz[j][i] = matriz->matriz[i][j];
		}
	}
}

void SM(ListaMatrizes **matrizes, char nome[], char nome2[], char nomeresultante[]) {
	ListaMatrizes *matriz1 = encontra_matriz((*matrizes), nome);
	ListaMatrizes *matriz2 = encontra_matriz((*matrizes), nome2);
	int i, j;

	if ((matriz1->numeroLinhas != matriz2->numeroLinhas) || (matriz1->numeroColunas != matriz2->numeroColunas)) {
		printf("ERRO\n");
	}
	else {
		CM(&(*matrizes), nomeresultante, matriz1->numeroLinhas, matriz1->numeroColunas);
		ListaMatrizes *matrizresultante = encontra_matriz((*matrizes), nomeresultante);

		for (i = 0; i < (matrizresultante)->numeroLinhas; i++) {
			for (j = 0; j < (matrizresultante)->numeroColunas; j++) {
				matrizresultante->matriz[i][j] = matriz1->matriz[i][j] + matriz2->matriz[i][j];
			}
		}
	}
}

void DV(ListaMatrizes **matrizes, char nome[], char nome2[], char nomeresultante[]) {
	ListaMatrizes *matriz1 = encontra_matriz((*matrizes), nome);
	ListaMatrizes *matriz2 = encontra_matriz((*matrizes), nome2);
	int i, j;

	if ((matriz1->numeroLinhas != matriz2->numeroLinhas) || (matriz1->numeroColunas != matriz2->numeroColunas)) {
		printf("ERRO\n");
	}
	else {
		CM(&(*matrizes), nomeresultante, matriz1->numeroLinhas, matriz1->numeroColunas);
		ListaMatrizes *matrizresultante = encontra_matriz((*matrizes), nomeresultante);

		for (i = 0; i < (matrizresultante)->numeroLinhas; i++) {
			for (j = 0; j < (matrizresultante)->numeroColunas; j++) {
				matrizresultante->matriz[i][j] = matriz1->matriz[i][j] / matriz2->matriz[i][j];
			}
		}
	}
}

void MM(ListaMatrizes **matrizes, char nome[], char nome2[], char nomeresultante[]) {
	ListaMatrizes *matriz1 = encontra_matriz((*matrizes), nome);
	ListaMatrizes *matriz2 = encontra_matriz((*matrizes), nome2);
	int i, j, k;

	if ((matriz1->numeroColunas != matriz2->numeroLinhas)) {
		printf("ERRO\n");
	}
	else {
		CM(&(*matrizes), nomeresultante, matriz1->numeroLinhas, matriz2->numeroColunas);
		ListaMatrizes *matrizresultante = encontra_matriz((*matrizes), nomeresultante);

		for (i = 0; i < (matrizresultante)->numeroLinhas; i++) {
			for (j = 0; j < (matrizresultante)->numeroColunas; j++) {
				matrizresultante->matriz[i][j] = 0;

				for (k = 0; k < (matriz1)->numeroColunas; k++) {
					matrizresultante->matriz[i][j] = matrizresultante->matriz[i][j] + (matriz1->matriz[i][k] * matriz2->matriz[k][j]);
				}
			}
		}
	}
}

void ME(ListaMatrizes **matrizes, char nome[], char nome2[], char nomeresultante[]) {
	ListaMatrizes *matriz1 = encontra_matriz((*matrizes), nome);
	ListaMatrizes *matriz2 = encontra_matriz((*matrizes), nome2);
	int i, j;

	if ((matriz1->numeroLinhas != matriz2->numeroLinhas) || (matriz1->numeroColunas != matriz2->numeroColunas)) {
		printf("ERRO\n");
	}
	else {
		CM(&(*matrizes), nomeresultante, matriz1->numeroLinhas, matriz1->numeroColunas);
		ListaMatrizes *matrizresultante = encontra_matriz((*matrizes), nomeresultante);

		for (i = 0; i < (matrizresultante)->numeroLinhas; i++) {
			for (j = 0; j < (matrizresultante)->numeroColunas; j++) {
				matrizresultante->matriz[i][j] = matriz1->matriz[i][j] * matriz2->matriz[i][j];
			}
		}
	}
}


void IM(ListaMatrizes *matrizes, char nome[]) {
	ListaMatrizes *matriz = encontra_matriz(matrizes, nome);
	int i, j;

	puts(matriz->nome);

	for (i = 0; i < matriz->numeroLinhas; i++) {
		for (j = 0; j < matriz->numeroColunas; j++) {
			printf("%4.2f ", matriz->matriz[i][j]);
		}
		printf("\n");
	}
}

void AL(ListaMatrizes *matrizes, char nome[], int i) {
	ListaMatrizes *matriz = encontra_matriz(matrizes, nome);	
	float valor;
	int j;
	char hashtag;

	for (j = 0; j < matriz->numeroColunas; j++) {
		scanf("%f", &valor);

		matriz->matriz[i][j] = valor;
	}

	getchar();
	hashtag = getchar();

	if (hashtag != '#') {
		printf("ERRO\n");
		
		for (j = 0; j < matriz->numeroColunas; j++) {
			matriz->matriz[i][j] = 0;
		}
	}
}

void AC(ListaMatrizes *matrizes, char nome[], int j) {
	ListaMatrizes *matriz = encontra_matriz(matrizes, nome);
	float valor;
	int i;
	char hashtag;

	for (i = 0; i < matriz->numeroLinhas; i++) {
		scanf("%f", &valor);

		matriz->matriz[i][j] = valor;
	}

	getchar();
	hashtag = getchar();

	if (hashtag != '#') {
		printf("ERRO\n");

		for (i = 0; i < matriz->numeroLinhas; i++) {
			matriz->matriz[i][j] = 0;
		}
	}
}

//Funções Auxiliares
int verifica_matriz_existe(ListaMatrizes *matrizes, char nome[]) {
	if (matrizes == NULL) {
		return 0;
	}
	if (strcmp(matrizes->nome, nome) == 0) {
		return 1;
	}
	else {
		verifica_matriz_existe(matrizes->prox, nome);
	}
}

int verifica_coordenadas(ListaMatrizes *matrizes, char nome[], int i, int j) {
	if (matrizes == NULL) {
		return 0;
	}
	if (strcmp(matrizes->nome, nome) == 0) {
		if ((matrizes->numeroLinhas > i) && (matrizes->numeroColunas > j)) {
			return 1;
		}
		else {
			return 0;
		}
	}
	else {
		verifica_matriz_existe(matrizes->prox, nome);
	}
}

int verifica_matriz_zero(ListaMatrizes *matrizes, char nome[]) {
	ListaMatrizes *matriz = encontra_matriz(matrizes, nome);
	int i, j;

	for (i = 0; i < matriz->numeroLinhas; i++) {
		for (j = 0; j < matriz->numeroColunas; j++) {
			if (matriz->matriz[i][j] == 0) {
				return 1;
			}
		}
	}

	return 0;
}

ListaMatrizes* encontra_matriz(ListaMatrizes *matrizes, char nome[]) {
	if (matrizes == NULL) {
		return NULL;
	}
	if (strcmp(matrizes->nome, nome) == 0) {
		return matrizes;
	}
	else {
		return encontra_matriz(matrizes->prox, nome);
	}
}
