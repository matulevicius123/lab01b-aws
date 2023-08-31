#include <stdio.h>
#include <stdlib.h>

char* acharChar(char* string, int desejado, int size, char charDesejado) {
    for (int i = size-1; i > desejado; i--)
    string[i] = string[i-1];
    string[desejado] = charDesejado;
    return(string); 
}

int main() {
    char Str[100] = "AbcdexfghijklmnopqrstuvwxyzAbcdexfghijkl>>>>>>>>u<<<<<<<cdexfghijklmnopqrstuvwxyzAbcdexfghijklmnopq"; 
    int indexDesejado = 48;
    char charDesejado = 'u';
    int tamanho = sizeof(Str)-1;
    printf("\nString: %s\nPosicao desejada: %d\nCaractere desejado: %c\n", Str, indexDesejado, charDesejado);

    char* novaStr = acharChar(Str, indexDesejado, tamanho, charDesejado);
    printf("\nNova string: %s\n", novaStr);
    return 0;
}
