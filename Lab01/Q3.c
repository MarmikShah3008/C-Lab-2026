//gross salary = net salary + deductions
#include <stdio.h>

int main(){

    int n, d;

    printf("What is the net salary you recieve after the deductions: ");
    scanf("%d", &n);

    printf("How much is the amount from your gross salary deducted: ");
    scanf("%d", &d);

    int g = n+d;
    printf("Your gross salary is %d\n", g);
    printf("Thank You");

    return 0;   
}