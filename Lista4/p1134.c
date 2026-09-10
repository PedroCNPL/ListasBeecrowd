#include <stdio.h>

int main() {
    int die, gsol, alco, cmbt;
    die = 0, gsol = 0, alco = 0;
    scanf("%d", &cmbt);
    while (cmbt != 4){
    if (cmbt == 1)
        alco++;
    else if (cmbt == 2)
        gsol++;
    else if (cmbt == 3)
        die++;
    scanf("%d", &cmbt);
    }
            printf("MUITO OBRIGADO\n");
            printf("Alcool: %d\n", alco);
            printf("Gasolina: %d\n", gsol);
            printf("Diesel: %d\n", die);
    return 0;
}
