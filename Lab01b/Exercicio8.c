#include <stdio.h>
#include <stdlib.h>

int**  criarTransposta(int matriz[3][2], int linhas, int colunas) {
    int **transposta = (int **)calloc(colunas, sizeof(int *));
    for (int i = 0; i < colunas; i++) {
        transposta[i] = (int *)calloc(linhas, sizeof(int));
    }

    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++) {
            transposta[j][i] = matriz[i][j];
    }
    return transposta;
}

int main() {
    int matriz[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int linhas = 3, colunas = 2;
    printf("\nMatriz: \n");
    for (int i = 0; i < linhas; i++)
    for (int j = 0; j < colunas; j++) {
        printf("%d ", matriz[i][j]);
        if (j == colunas - 1)
        printf("\n");
    }
    
    int** transposta = criarTransposta(matriz, linhas, colunas);

    printf("Transposta:\n");
    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

