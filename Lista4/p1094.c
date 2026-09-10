#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int total, coelhos, ratos, sapos;
    double pc, ps, pr;
    char tipo;
    int quantia;

    total = 0;
    coelhos = 0, ratos = 0, sapos = 0;

    for (int i = 0; i < N; i++) {

        scanf("%d %c", &quantia, &tipo);

        total += quantia;

        if (tipo == 'C') {
            coelhos += quantia;
        } else if (tipo == 'R') {
            ratos += quantia;
        } else if (tipo == 'S') {
            sapos += quantia;
        }
    }

    pc = coelhos * 100.0 / total;
    pr = ratos * 100.0 / total;
    ps = sapos * 100.0 / total;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2lf %%\n", pc);
    printf("Percentual de ratos: %.2lf %%\n", pr);
    printf("Percentual de sapos: %.2lf %%\n", ps);

    return 0;
}
