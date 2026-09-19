#include <stdio.h>

int main(){

    char c;
    printf("Type a character: ");
    scanf("%s", &c);

    int s = c;

    printf("The ascii code of the character you gave is %d", s);
}