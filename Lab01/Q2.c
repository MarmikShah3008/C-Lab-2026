#include <stdio.h>

int main(){

int a, b, c, d, e;

printf("Enter the marks of Maths: ");
scanf("%d", &a);

printf("Enter the marks of Physics: ");
scanf("%d", &b);

printf("Enter the marks of Chemistry: ");
scanf("%d", &c);

printf("Enter the marks of English: ");
scanf("%d", &d);

printf("Enter the marks of CS: ");
scanf("%d", &e);

int sum = a + b + c + d + e;
printf("The sum is %d\n", sum);

int percentage = sum/5;
printf("The total percentage is %d\n", percentage);

printf("Thank You");
return 0;
}
