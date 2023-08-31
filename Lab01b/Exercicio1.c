#include <stdio.h>
void main() {
    int matriz[3][4] = { {4, 7, 8, 11}, {9, 3, 10, 8}, {5, 12, 6, 7}};
    int i, j, min;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz[i][j] < min) {
                min = matriz[i][j];
            }
        }
    }
    printf("A linha que possui o menor numero e a linha %d.", min);
}
