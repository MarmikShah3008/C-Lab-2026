#include <stdio.h>
int main(){

    int n;
    printf("Give any number n: ");
    scanf("%d", &n);

    int t = 0;
    for( int i = 0; i < n; i = i + 2)
    t = t + i;
    printf("The sum of all even numbers is %d\n", t);

    int r = 0;
    for( int i = 1; i < n; i = i + 2)
    r = r + i; 
    printf("The sum of all odd numbers is %d\n", r);

    return 0;
}