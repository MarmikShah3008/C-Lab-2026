#include <stdio.h>

int main(){
    
    float b, h;
    printf("Enter the base: ");
    scanf("%f",&b);
    printf("Enter the height: ");
    scanf("%f",&h);

    float a = (b * h)/2;
    printf("The area is %.2f", a);
}