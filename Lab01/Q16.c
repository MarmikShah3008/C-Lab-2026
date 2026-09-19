#include <stdio.h>
int main(){

    int a, b, c;
    
    printf("Enter the first no: ");
    scanf("%d", &a);

     printf("Enter the second no: ");
    scanf("%d", &b);

     printf("Enter the third no: ");
    scanf("%d", &c);


    if(a > b){
        if(a > c)
        printf("%d is largest number", a);
        else 
        printf("%d is the largest number", c);
    }
    else{
        if(b > c)
        printf("%d is largest number", b);
        else
        printf("%d is the largest number", c);
    }

    return 0;

}