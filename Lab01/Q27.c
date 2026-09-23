#include <stdio.h>
#include <math.h>
int main(){

    int a, t, number;
    printf(" Enter any digit: ");
    scanf("%d", &a);

    if( a <= 1)
    printf("The number is not prime\n");

    else
    {
        for(int i = 2; i <= sqrt(a); i++)
        {
        t = a % i;
        if(t == 0)
        {
            number = 0;
            break;
        }
        else
        number = 1;
        }

        if (number == 0)
        printf("The number is not prime");
        else
        printf("The number is prime");
    }
    return 0;
}