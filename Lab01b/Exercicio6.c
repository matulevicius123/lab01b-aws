#include <stdio.h>
int main() {
    int matriz[10][10], transposta[10][10], linhas, colunas;
    printf("Insira a quantidade de linhas da matriz: \n");
    scanf("%d", &linhas);
    printf("Insira a quantidade de colunas matriz: \n");
    scanf("%d", &colunas);

    printf("Insira os elementos da matriz:\n");
    for (int i = 0; i < linhas; ++i)
    for (int j = 0; j < colunas; ++j) {
        printf("Insira o proximo elemento que sera inserido em X%d%d\n", i, j);
        scanf("%d", &matriz[i][j]);
    }

    printf("\nMatriz: \n");
    for (int i = 0; i < linhas; ++i)
    for (int j = 0; j < colunas; ++j) {
        printf("%d ", matriz[i][j]);
        if (j == colunas - 1)
        printf("\n");
    }

    for (int i = 0; i < linhas; ++i)
    for (int j = 0; j < colunas; ++j) {
        transposta[j][i] = matriz[i][j];
    }

    printf("\nTransposta:\n");
    for (int i = 0; i < colunas; ++i)
    for (int j = 0; j < linhas; ++j) {
        printf("%d  ", transposta[i][j]);
        if (j == linhas - 1)
        printf("\n");
    }
    return 0;
}
