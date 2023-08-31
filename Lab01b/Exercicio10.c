#include <stdio.h>
#include <stdlib.h>

int**  multiplicarLinha(int matriz[3][2], int linhas, int colunas, int select, int mult) {
    int **matrizFinal = (int **)calloc(linhas, sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        matrizFinal[i] = (int *)calloc(colunas, sizeof(int));
    }

    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++) {
            if (i == select)
            matrizFinal[i][j] = matriz[i][j] * mult;
            else matrizFinal[i][j] = matriz[i][j];
    }
    return matrizFinal;
}

int**  multiplicarColuna(int matriz[3][2], int linhas, int colunas, int select, int mult) {
    int **matrizFinal = (int **)calloc(linhas, sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        matrizFinal[i] = (int *)calloc(colunas, sizeof(int));
    }

    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++) {
            if (j == select)
            matrizFinal[i][j] = matriz[i][j] * mult;
            else matrizFinal[i][j] = matriz[i][j];
    }
    return matrizFinal;
}

int main() {
    int matriz[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int linhas = 3, colunas = 2, selecao = 1, multi = 5;
    int** resultado;
    printf("\nMatriz: \n");
    for (int i = 0; i < linhas; i++)
    for (int j = 0; j < colunas; j++) {
        printf("%d ", matriz[i][j]);
        if (j == colunas - 1)
        printf("\n");
    }
    printf("Multiplicador: %d\nSelecao de linha/coluna: %d\n", multi, selecao+1);
    resultado = multiplicarLinha(matriz, linhas, colunas, selecao, multi);

    printf("Matriz, linha multiplicada:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }
    
    resultado = multiplicarColuna(matriz, linhas, colunas, selecao, multi);

    printf("Matriz, coluna multiplicada:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

