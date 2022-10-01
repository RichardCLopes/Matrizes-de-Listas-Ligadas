#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "matriz.c"
#include "lista.c"

void main() {
	ListaMatrizes *matrizes = NULL;
	char opcao[3], nome[100], nome2[100], nome3[100];
	int i, j;
	float valor;

	do {
		scanf("%s", &opcao);

		if (strcmp(opcao, "CM") == 0) {
			scanf("%s", &nome);
			scanf("%i", &i);
			scanf("%i", &j);

			if ((i < 1) || (i > 50) || (j < 1) || (j > 50) || (verifica_matriz_existe(matrizes, nome) == 1)) {
				printf("ERRO\n");
			}
			else {
				CM(&matrizes, nome, i, j);
				printf("OK\n");
			}
		}
		if (strcmp(opcao, "DM") == 0) {
			scanf("%s", &nome);

			if (verifica_matriz_existe(matrizes, nome) == 0) {
				printf("ERRO\n");
			}
			else {
				DM(&matrizes, nome);
				printf("OK\n");
			}
		}
		if (strcmp(opcao, "IM") == 0) {
			scanf("%s", &nome);

			if (verifica_matriz_existe(matrizes, nome) == 0) {
				printf("ERRO\n");
			}
			else {
				IM(matrizes, nome);
			}
		}
		if (strcmp(opcao, "AE") == 0) {
			scanf("%s", &nome);
			scanf("%i", &i);
			scanf("%i", &j);
			scanf("%f", &valor);

			if ((verifica_matriz_existe(matrizes, nome) == 0) || (verifica_coordenadas(matrizes, nome, i, j) == 0)) {
				printf("ERRO\n");
			}
			else {
				AE(matrizes, nome, i, j, valor);
				printf("OK\n");
			}
		}
		if (strcmp(opcao, "AL") == 0) {
			scanf("%s", &nome);
			scanf("%i", &i);

			if ((verifica_matriz_existe(matrizes, nome) == 0) || (verifica_coordenadas(matrizes, nome, i, 0) == 0)) {
				printf("ERRO\n");
			}
			else {
				AL(matrizes, nome, i);
			}
		}
		if (strcmp(opcao, "AC") == 0) {
			scanf("%s", &nome);
			scanf("%i", &j);

			if ((verifica_matriz_existe(matrizes, nome) == 0) || (verifica_coordenadas(matrizes, nome, 0, j) == 0)) {
				printf("ERRO\n");
			}
			else {
				AC(matrizes, nome, j);
			}
		}
		if (strcmp(opcao, "TM") == 0) {
			scanf("%s", &nome);
			scanf("%s", &nome2);

			if ((verifica_matriz_existe(matrizes, nome) == 0) || (verifica_matriz_existe(matrizes, nome2) == 1)) {
				printf("ERRO\n");
			}
			else {
				TM(&matrizes, nome, nome2);
				IM(matrizes, nome2);
			}
		}
		if (strcmp(opcao, "SM") == 0) {
			scanf("%s", &nome);
			scanf("%s", &nome2);
			scanf("%s", &nome3);

			if ((verifica_matriz_existe(matrizes, nome) == 0) || (verifica_matriz_existe(matrizes, nome2) == 0) || (verifica_matriz_existe(matrizes, nome3) == 1)) {
				printf("ERRO\n");
			}
			else {
				SM(&matrizes, nome, nome2, nome3);
				IM(matrizes, nome3);
			}
		}
		if (strcmp(opcao, "DV") == 0) {
			scanf("%s", &nome);
			scanf("%s", &nome2);
			scanf("%s", &nome3);

			if ((verifica_matriz_existe(matrizes, nome) == 0) || (verifica_matriz_existe(matrizes, nome2) == 0) || (verifica_matriz_existe(matrizes, nome3) == 1) || verifica_matriz_zero(matrizes, nome2) == 1) {
				printf("ERRO\n");
			}
			else {
				DV(&matrizes, nome, nome2, nome3);
				IM(matrizes, nome3);
			}
		}
		if (strcmp(opcao, "MM") == 0) {
			scanf("%s", &nome);
			scanf("%s", &nome2);
			scanf("%s", &nome3);

			if ((verifica_matriz_existe(matrizes, nome) == 0) || (verifica_matriz_existe(matrizes, nome2) == 0) || (verifica_matriz_existe(matrizes, nome3) == 1)) {
				printf("ERRO\n");
			}
			else {
				MM(&matrizes, nome, nome2, nome3);

				if ((verifica_matriz_existe(matrizes, nome3) == 1)) {
					IM(matrizes, nome3);
				}
			}
		}
		if (strcmp(opcao, "ME") == 0) {
			scanf("%s", &nome);
			scanf("%s", &nome2);
			scanf("%s", &nome3);

			if ((verifica_matriz_existe(matrizes, nome) == 0) || (verifica_matriz_existe(matrizes, nome2) == 0) || (verifica_matriz_existe(matrizes, nome3) == 1)) {
				printf("ERRO\n");
			}
			else {
				ME(&matrizes, nome, nome2, nome3);
				IM(matrizes, nome3);
			}
		}
	} while (strcmp(opcao, "FE") != 0);

	system("Pause");
}
