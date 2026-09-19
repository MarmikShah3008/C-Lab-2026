#include <stdio.h>

int main(){

    int ts, h, m, s;
    printf("Enter the total seconds: ");
    scanf("%d", &ts);

    m = ts/60;
    s = ts%60;
    h = m/60;
    m = m % 60;
    
    printf("The total hours are %d, minutes are %d and seconds are %d", h,m,s);
    
}