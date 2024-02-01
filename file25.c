#include <stdio.h>

void massimo(float a,float b)
{
if(a==b)
{
    printf("%f e %f sono uguali",a,b);
}
else if (a>b)
{
    printf("%f è maggiore di %f",a,b);
}
else
{
    printf("%f è minore di %f" ,a,b);
}
}

int main()
{
    printf("insersci un numero\n");
    float n; 
    scanf(" %f", &n);
    printf("insersci un numero\n");
    float m; 
    scanf(" %f", &m);
    massimo(n, m);

     return(0);
}