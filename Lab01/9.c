#include <stdio.h>

int main(){

    int h, m, s;
    printf("Enter total hours: ");
    scanf("%d", &h);
    printf("Enter total minutes: ");
    scanf("%d", &m);
    printf("Enter total seconds: ");
    scanf("%d", &s);

    int ts;
    ts = h*60*60 + m*60 + s;
    printf("The total seconds are %d", ts);
    
}