    #include <stdio.h>
    
    int main() {
      double pi, c, b, a, raio1, raio2, at, atr, aq, ar, ac;
        scanf("%lf",  &a);
        scanf("%lf",  &b);
        scanf("%lf",  &c);
      pi =  3.14159;
      raio1 = c;
      raio2 = raio1 * raio1;
      ac = pi*raio2;
      at = (a*c)/2;
      aq = b*b;
      ar = a*b;
      atr = ((a+b)*c)/2;
    
      printf("TRIANGULO: %.3lf\n", at);
      printf("CIRCULO: %.3lf\n", ac);
      printf("TRAPEZIO: %.3lf\n", atr);
      printf("QUADRADO: %.3lf\n", aq);
      printf("RETANGULO: %.3lf\n", ar);

        return 0;
    }