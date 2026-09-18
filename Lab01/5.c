#include <stdio.h>

int main(){

    int a, b, c;
    
    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("After swap: a = %d, b = %d\n", a, b);
    printf("Thank you");

    return 0;
}