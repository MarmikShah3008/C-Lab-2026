#include <stdio.h>
int main(){

    int a, e ;
    printf("Enter the base: ");
    scanf("%d", &a);

    printf("Enter the exponent: ");
    scanf("%d", &e);

    int i=1;
    for( e; e>=1; e--)
    i = i * a;

    printf("%d", i);
    return 0;
}