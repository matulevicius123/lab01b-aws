#include <stdio.h>
#include <stdlib.h>

int**  converterModulos(int matriz[3][2], int linhas, int colunas) {
    int **matrizFinal = (int **)calloc(linhas, sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        matrizFinal[i] = (int *)calloc(colunas, sizeof(int));
    }

    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] < 0)
            matrizFinal[i][j] = matriz[i][j] * -1;
            else matrizFinal[i][j] = matriz[i][j];
    }
    return matrizFinal;
}

int main() {
    int matriz[3][2] = {{1, 2}, {-3, 4}, {-5, -6}};
    int linhas = 3, colunas = 2;
    printf("\nMatriz: \n");
    for (int i = 0; i < linhas; i++)
    for (int j = 0; j < colunas; j++) {
        printf("%d ", matriz[i][j]);
        if (j == colunas - 1)
        printf("\n");
    }

    int** matrizFinal = converterModulos(matriz, linhas, colunas);

    printf("Matriz Final:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matrizFinal[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

