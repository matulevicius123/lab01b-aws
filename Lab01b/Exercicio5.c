#include <stdio.h>
#include <stdlib.h>
void main() { 
    int i, j, linha, valor;
    int matriz[3][4]= {{1,1,1,1}, {2,2,2,2}, {3,3,3,3}};
    printf("Escolha a linha a ser multiplicada\n");
    scanf("%d", &linha);
    printf("Escolha o valor.\n");
    scanf("%d", &valor);

    for (j = 0; j < 4; j++) {
    matriz[linha-1][j] = matriz[linha-1][j]*valor;
    printf("%d", matriz[linha-1][j]);    
    }
}
