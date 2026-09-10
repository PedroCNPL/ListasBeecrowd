    #include <stdio.h>
    
    int main() {
        int a, b;
        double c, X;

        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%lf", &c);

        X = b * c;
        printf("NUMBER = %d\n", a);
        printf("SALARY = U$ %.2f\n", X);
        return 0;
    }