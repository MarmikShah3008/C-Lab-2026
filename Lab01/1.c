#include <stdio.h>

int main(){
// simple interest = principal amount * rate of interest * time period in years
int p, r, t;

printf("Enter the oignal amount : ");
scanf("%d", &p);

printf("Enter the rate of interest: ");
scanf("%d", &r);

printf("Enter the time in years: ");
scanf("%d", &t);

int SI = p * r * t / 100;
printf("The simple interest is %d", SI);

return 0;
}