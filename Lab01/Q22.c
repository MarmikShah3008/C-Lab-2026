#include <stdio.h>
int main(){

    int a;
    printf("Enter any number: ");
    scanf("%d", &a);

    int f = 1;
    for(a; a >= 1; a--)
    {
        f = f * a;
    }

    printf("%d", f);

    return 0;
}