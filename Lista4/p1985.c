#include <stdio.h>

int main() {
    int N, qnt, prdt;
    double precofinal;
    scanf("%d", &N);
    precofinal = 0;

    int usou1001 = 0, usou1002 = 0, usou1003 = 0, usou1004 = 0, usou1005 = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &prdt, &qnt);

        switch (prdt) {
            case 1001:
                if (usou1001) continue;
                precofinal += qnt * 1.50;
                usou1001 = 1;
                break;

            case 1002:
                if (usou1002) continue;
                precofinal += qnt * 2.50;
                usou1002 = 1;
                break;

            case 1003:
                if (usou1003) continue;
                precofinal += qnt * 3.50;
                usou1003 = 1;
                break;

            case 1004:
                if (usou1004) continue;
                precofinal += qnt * 4.50;
                usou1004 = 1;
                break;

            case 1005:
                if (usou1005) continue;
                precofinal += qnt * 5.50;
                usou1005 = 1;
                break;
        }
    }

    printf("%.2lf\n", precofinal);

    return 0;
}
