#include <stdio.h>

int main(){

    int cm, m, p, c, e;
    
    printf("Enter marks in Maths(out of 200): ");
    scanf("%d", &m);
    {if (m >= 0 && m <= 200);
    else
        {printf("The values entered are not in range\n");
        return 0;}
    }
    
    printf("Enter marks in Physics(out of 200): ");
    scanf("%d", &p);
    {if (p >= 0 && p <= 200);
    else
        {printf("The values entered are not in range\n");
        return 0;}
    }

    printf("Enter marks in Chemistry(out of 200): ");
    scanf("%d", &c);
    {if (c >= 0 && c <= 200);
    else
        {printf("The values entered are not in range\n");
        return 0;}
    }
    
    printf("Enter marks in Entrance exam(out of 100): ");
    scanf("%d", &e);
    {if (e >= 0 && e <= 200);
    else
        {printf("The values entered are not in range\n");
        return 0;}
    }

    cm = m/2 + p/2 + c/2 + e;
    printf("The cuttoff marks are %d", cm);
}
