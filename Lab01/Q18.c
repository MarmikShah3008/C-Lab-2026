#include <stdio.h>
int main(){

    int a, b, c;

     printf("Enter the first no: ");
    scanf("%d", &a);

     printf("Enter the second no: ");
    scanf("%d", &b);

     printf("Enter the third no: ");
    scanf("%d", &c);

    (a > b && a > c) ? printf("%d is the largest number", a) : (b > a && b > c) ? printf("%d is the largest number", b) : printf("%d is the largest number", c);
    
    return 0;
}

