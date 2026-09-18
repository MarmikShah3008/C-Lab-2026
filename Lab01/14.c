#include <stdio.h>
int main(){

    char c;
    printf("Enter any character: ");
    scanf("%c", &c);

    int a = c;
    
    if( a >= 65 && a <= 90)
    printf("The character is a capital letter");

    else if(a >= 97 && a <= 122){
    printf("The character is a small letter");
    }

    else if(a >= 48 && a <= 57){
    printf("The character is a digit");
    } 
    
    else
    printf("The character is a special symbol");

    return 0;
}