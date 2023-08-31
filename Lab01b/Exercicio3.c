#include <stdio.h>
#include <stdlib.h>
void main() {
    
    printf("Insira um numero impar.\n");
    int escolha, index, index1, max;
    scanf("%d", &escolha);
    if (escolha % 2 == 0) {
        printf("O numero inserido foi invalido.");
        exit(1);
    }

    max = escolha;
    for (int i = 1; i <= escolha; i++) {
        for (int j = 0; j < i-1; j++) {
            printf("  ");
        }

        for (int j = i; j <= escolha; j++) {
            printf("%d ", j);
        }
        printf("\n");
        escolha--;
    }
}
