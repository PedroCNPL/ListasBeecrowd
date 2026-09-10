#include <stdio.h>

int main() {
    int x, y, menor, maior, soma;
    soma = 0;
    scanf("%d %d", &x, &y);

    if (x < y) {
        menor = x;
        maior = y;
    } else {
        menor = y;
        maior = x;
    }

    for (int i = menor + 1; i < maior; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }

    printf("%d\n", soma);

    return 0;
}
