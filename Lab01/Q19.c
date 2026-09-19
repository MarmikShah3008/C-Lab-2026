#include <stdio.h>
int main(){

    char c;
    printf("Enter the character: ");
    scanf("%c", &c);

    int a = c;

    (a >= 97 && a <= 122) ? printf("The character is a lower case letter") : printf("The character is not a lower case letter");
    return 0;
}