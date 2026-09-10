    #include <stdio.h>
    
    int main() {
      double km, l, vm;
        scanf("%lf",  &km);
        scanf("%lf",  &vm);
        l = (km*vm)/12;
   
    
      printf("%.3lf\n", l);
        return 0;
    }