#include <stdio.h>
#include <stdlib.h>

int acharChar(char* string, char desejado, int size) {
    for (int i = 0; i < size; i++)
    if (string[i] == desejado)
    return(i); 
    printf("Erro!"); 
    exit(1);
}

int main() {
    char string[] = "Abcdefghijklmnopqrstuvwxyz"; 
    char desejado = 'h';
    int tamanho = sizeof(string)-1;
    printf("\nString: %s\nCaractere desejado: %c\n", string, desejado);

    int index = acharChar(string, desejado, tamanho);
    printf("\nPrimeira ocorrencia do caractere desejado: %d", index+1);
    return 0;
}
