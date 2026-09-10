    #include <stdio.h>
    
    int main() {
      double pi, raio1, raio2, area;
      scanf("%lf",  &raio1);
      pi =  3.14159;
      raio2 = raio1 * raio1;
      area = pi*raio2;
      printf("A=%.4lf\n", area);

        return 0;
    }