#include <stdio.h>
int main(){

    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    int t;
    for( int i = 1; i <= 10; i++)
    {
    t = a * i;
    printf("%d\n", t);
    }
        
    return 0;
}