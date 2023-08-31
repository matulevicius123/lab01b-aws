#include <stdio.h>

int main() {
    int size = 20;
    char a[size], b[size];
    printf("Insira o primeiro nome.\n");
    fgets(a, size, stdin);
    printf("Insira o segundo nome.\n");
    fgets(b, size, stdin);

    for (int i = 0; i < size; i++) {
    if(a[i]<b[i]) {
        printf("\nNomes\n%s%s", a, b);
        return 0; }

    if(a[i]>b[i]) {
        printf("\nNomes\n%s%s", b, a);
        return 0; }  
    }
}

