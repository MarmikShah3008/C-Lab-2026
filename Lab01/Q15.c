#include <stdio.h>
int main(){

    float a, b, c, d, e;

    printf("Enter marks of maths: ");
    scanf("%f", &a);

     printf("Enter marks of science: ");
    scanf("%f", &b);

     printf("Enter marks of sst: ");
    scanf("%f", &c);

     printf("Enter marks of english: ");
    scanf("%f", &d);

     printf("Enter marks of hindi: ");
    scanf("%f", &e);

    float p = (a + b + c + d + e)/5;
    
    if(p >= 60)
    printf("First division");

    else if(p >= 45 && p < 60){
    printf("Second division");
    }

    else if(p >= 33 && p < 45){
    printf("Third division");
    }

    else{
    printf("Fail");
    }
    return 0;
}