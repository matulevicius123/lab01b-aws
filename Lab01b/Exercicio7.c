#include <stdio.h>

struct Pessoa {
    int idade;
    int peso;
    int altura;
};


int main() {
    struct Pessoa pessoas[3] = {
        [0].idade = 10, [0].peso = 30, [0].altura = 130,
        [1].idade = 20, [1].peso = 80, [1].altura = 180,
        [2].idade = 45, [2].peso = 130, [2].altura = 175
    };

    char nome[3][50];
    int input;
    for (int i = 0; i < 3; i++) {
        printf("Insira o nome da pessoa %d.\n", i+1);
        fgets(nome[i], 50, stdin);   
    }
    for (int i = 0; i < 3; i++) {
        printf("\nPessoa numero %d:\nNome: %sIdade: %d\nPeso: %d\nAltura: %d\n", i+1, nome[i], pessoas[i].idade, pessoas[i].peso, pessoas[i].altura);
    }
    return 0;
} 
