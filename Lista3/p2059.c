#include <stdio.h>
 
int main() {
 
    int p, j1, j2, r, a, soma;
    scanf("%d", &p);
    scanf("%d", &j1);
    scanf("%d", &j2);
    scanf("%d", &r);
    scanf("%d", &a);
    soma = j1 + j2;

     if (r == 1)
        if (a == 1)
            printf("Jogador 2 ganha!\n");
        else
            printf("Jogador 1 ganha!\n");
    else if (a == 1)
        printf("Jogador 1 ganha!\n");
    else {
           if (soma % 2 == 0)
            if (p == 1)
                printf("Jogador 1 ganha!\n");
            else
                printf("Jogador 2 ganha!\n");
        else
            if (p == 0)
                printf("Jogador 1 ganha!\n");
            else
                printf("Jogador 2 ganha!\n");
    }
    return 0;
}