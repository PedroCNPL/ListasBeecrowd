#include <stdio.h>
 
int main() {
 int a, b;
 double c;
 scanf("%d", &a);
 scanf("%d", &b);

    switch (a) {
        case 1:
        c = (b * 4.00);
        printf("Total: R$ %.2lf\n", c);
        break;
        case 2:
        c = (b * 4.5);
        printf("Total: R$ %.2lf\n", c);
        break;
        case 3:
        c = (b * 5.00);
        printf("Total: R$ %.2lf\n", c);
        break;
        case 4:
        c = (b * 2.00);
        printf("Total: R$ %.2lf\n", c);
        break;
        case 5:
        c = (b * 1.50);
        printf("Total: R$ %.2lf\n", c);
        break;
    }
    return 0;
}