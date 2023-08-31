#include <stdio.h>
#include <stdlib.h>

char* acharChar(char* string, int desejado, int size) {
    for (int i = desejado; i < size; i++)
    string[i] = string[i+1];
    string[size] = '\0';
    return(string); 
}

int main() {
    char Str[100] = "AbcdexfghijklmnopqrstuvwxyzAbcdexfghijkl>>>>>>>>u<<<<<<<cdexfghijklmnopqrstuvwxyzAbcdexfghijklmnopq"; 
    int indexDesejado = 48;
    int tamanho = sizeof(Str)-1;
    printf("\nString: %s\nCaractere desejado: %d\n", Str, indexDesejado);

    char* novaStr = acharChar(Str, indexDesejado, tamanho);
    printf("\nNova string: %s", novaStr);
    return 0;
}
