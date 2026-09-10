    #include <stdio.h>
    
    int main() {
      double a, pi, volume, raio;
        scanf("%lf",  &a);
        raio = a*a*a;
        pi = 3.14159;
        volume = ((4.0/3)*pi*raio);
        printf("VOLUME = %.3lf\n", volume);
      return 0;
    }