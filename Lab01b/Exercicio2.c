#include <stdio.h>
void main() {
    float N1, N2, N3, ME, MA, input;
    printf("Digite a N1 do aluno.\n");
    scanf("%f", &input);
    N1 = input;
    printf("Digite a N2 do aluno.\n");
    scanf("%f", &input);
    N2 = input;
    printf("Digite a N3 do aluno.\n");
    scanf("%f", &input);
    N3 = input;

    ME = (N1 + N2 + N3) / 3;
    MA = ((N1 + N2*2 + N3*3 + ME)/7);
    if (MA >= 9)
    printf("MA = %f        A", MA);
    if (MA >= 7.5 && MA < 9)
    printf("MA = %f        B", MA);
    if (MA >= 6 && MA < 7.5)
    printf("MA = %f        C", MA);
    if (MA >= 4 && MA < 6)
    printf("MA = %f        D", MA);
    if (MA < 4)
    printf("MA = %f        E", MA);
}
