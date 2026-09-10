#include <stdio.h>

int main()
{
 int a, b, c, d, e, positivos, negativos, par, impar;
 scanf("%d", &a);
 scanf("%d", &b);
 scanf("%d", &c);
 scanf("%d", &d);
 scanf("%d", &e);
 positivos = 0;
 negativos = 0;
 par = 0;
 impar = 0;
    if (a > 0)
        positivos++;
    if (a<0)
        negativos++;
    
    if (a % 2 == 0)
        par++;
    else
        impar++;
    if (b > 0)
        positivos++;
    if (b<0)
        negativos++;
    
    if (b % 2 == 0)
        par++;
    else
        impar++;
    if (c > 0)
        positivos++;
    if (c<0)
        negativos++;
    
    if (c % 2 == 0)
        par++;
    else
        impar++;
    if (d > 0)
        positivos++;
    if (d<0)
        negativos++;
    
    if (d % 2 == 0)
        par++;
    else
        impar++;
    if (e > 0)
        positivos++;
    if (e<0)
        negativos++;
    
    if (e % 2 == 0)
        par++;
    else
        impar++;
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);
    return 0;
}