#include <stdio.h>
 
int main() {
    double salario, imposto, acalcular, calculado, calculado1, fixo;

    scanf("%lf", &salario);

    if (salario <= 2000)
        printf("Isento\n");
    
    else
    if (salario <= 3000 && salario > 2000){
        acalcular = salario - 2000;
        imposto = (acalcular * 0.08);
        printf("R$ %.2lf\n", imposto);
    }
    
    else
    if (salario <= 4500 && salario > 3000){
        acalcular = salario - 3000;
        imposto = (acalcular * 0.18);
        fixo = 1000 * 0.08;
        calculado = imposto + fixo;
        printf("R$ %.2lf\n", calculado);
    }
    
    else
    if (salario > 4500){
        acalcular = salario - 4500;
        imposto = (acalcular * 0.28);
        calculado1 = (1500.00 * 0.18);
        fixo = 1000 * 0.08;
        calculado = imposto + fixo + calculado1;
        printf("R$ %.2lf\n", calculado);
    }

    return 0;
}