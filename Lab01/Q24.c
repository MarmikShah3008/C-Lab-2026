#include <stdio.h>
#include <math.h>
int main(){

    int n, x, y;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of x: ");
    scanf("%d", &x);

    if( n == 1)
    y = 1 + x;

    else if( n == 2)
    y = 1 + x/n;

    else if( n == 3)
    y = 1 + pow(x,n);

    else
    y = 1 + n*x;

    printf("%d", y);
    return 0;
}