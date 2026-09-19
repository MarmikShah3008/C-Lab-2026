#include <stdio.h>
int main(){

    int a, t;
    printf(" Enter any digit: ");
    scanf("%d", &a);

    if( a <= 1)
    printf("The number is not prime\n");

    else
    {
        for(int i = 2; i <= a/2; i++)
        t = a % i;
        if(t == 0)
        printf("The number is not prime\n");
        else
        printf("The number is prime\n");
    }
    return 0;
}