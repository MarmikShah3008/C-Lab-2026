#include <stdio.h>

int main(){

    float f;
    printf("Enter your temperature in Fahrenheit: ");
    scanf("%f", &f);

    float c = (f-32)*5/9;

    printf("The temperature in Celcius is %f degree celcius.\n",c);
    printf("Thank you");

    return 0;
}