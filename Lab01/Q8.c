#include <stdio.h>

int main(){
    
    int ts = 31558150;
    int d, hr, m, s;
    m = ts/60;
    s = ts % 60;
    hr = m/60;
    m = m % 60;
    d = hr/24;
    hr = hr%24;
    printf("There are %d days, %d hours, %d minutes and %d seconds", d,hr,m,s);
}