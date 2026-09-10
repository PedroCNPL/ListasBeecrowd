#include <stdio.h>

int main()
{
 int a, b, c;
 scanf("%d", &a);
 scanf("%d", &b);
 scanf("%d", &c);
    if (a < b && b < c){
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    }
    
    if (b < a && a < c){
    printf("%d\n", b);
    printf("%d\n", a);
    printf("%d\n", c);
    printf("\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    }
    
    if (b < c && c < a){
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", a);
    printf("\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    }
    
    if (a < c && c < b){
    printf("%d\n", a);
    printf("%d\n", c);
    printf("%d\n", b);
    printf("\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    }
    
    if (c < a && a < b){
    printf("%d\n", c);
    printf("%d\n", a);
    printf("%d\n", b);
    printf("\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    }
    
    if (c < b && b < a){
    printf("%d\n", c);
    printf("%d\n", b);
    printf("%d\n", a);
    printf("\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    }
    
    return 0;
}