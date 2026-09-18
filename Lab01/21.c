#include <stdio.h>
int main(){

    int a, b;
    printf("Write first number: ");
    scanf("%d", &a);
    printf("Write second number: ");
    scanf("%d", &b);
    
    char c;
    printf("Enter any arithmetic operator: ");
    scanf(" %c", &c);

    switch(c)
    {
        case '+':
        printf("%d", a+b);
        break;

        case '-':
        printf("%d", a-b);
        break;

        case '*':
        printf("%d", a*b);
        break;

        case '/':
        printf("%d", a/b);
        break;
        
        default:
        printf("The operator is not from \'+, -, *. /\'.");
        break;
    }
    return 0;
}