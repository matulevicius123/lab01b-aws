#include <stdio.h>
#include <stdlib.h>

int**  somar(int matriz[2][3], int linhas, int colunas) {
    int **matrizSoma = (int **)calloc(linhas, sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        matrizSoma[i] = (int *)calloc(colunas, sizeof(int));
    }

    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++) {
            if (i == 1)
            matrizSoma[i][j] = matriz[i-1][j]+matriz[i][j];
            else matrizSoma[i][j] = matriz[i][j];
    }
    return matrizSoma;
}

int**  multiplicar(int matriz[2][3], int linhas, int colunas) {
    int **matrizMulti = (int **)calloc(linhas, sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        matrizMulti[i] = (int *)calloc(colunas, sizeof(int));
    }

    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++) {
            if (i == 1)
            matrizMulti[i][j] = matriz[i-1][j]*matriz[i][j];
            else matrizMulti[i][j] = matriz[i][j];
    }
    return matrizMulti;
}

int main() {
    int matriz[2][3] = {{4, 1, 3}, {2, 2, 2}};
    int linhas = 2, colunas = 3;
    printf("\nMatriz: \n");
    for (int i = 0; i < linhas; i++)
    for (int j = 0; j < colunas; j++) {
        printf("%d ", matriz[i][j]);
        if (j == colunas - 1)
        printf("\n");
    }

    int** soma = somar(matriz, linhas, colunas);

    printf("Soma de linhas:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }

    int** multi = multiplicar(matriz, linhas, colunas);

    printf("Multiplicacao de linhas:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", multi[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

