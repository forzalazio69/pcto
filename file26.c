#include <stdio.h>

int fattoriale(int n)
{
int x=1;
int y=1;
    while (x<=n)
    { 
        y=y*x;
        x=x+1;
    }
return (y);
}

int main()
{
     printf("insersci un numero\n");
     int n; 
     scanf(" %d", &n);
     printf(" il fattoriale è %d\n", fattoriale(n));
     return(0);
}