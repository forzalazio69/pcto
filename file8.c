#include <stdio.h>
int main()
{
    printf("insersci la lunghezza di un lato di un triangolo\n");
    float n; 
    scanf("%f", &n);
    printf("inseisci la lunghezza di un altro lato di un triangolo\n");
    float numero2;
    scanf("%f", &numero2);
    printf("inseisci la lunghezza di un altro lato di un triangolo\n");
    float numero3;
    scanf("%f", &numero3);
    float numero4;
    numero4=numero2+n;
    float numero5;
    numero5=numero3+numero2;
    float numero6;
    numero6=n+numero3;
    if (numero4>numero3 && numero5>n &&  numero6>numero2)
    {
        printf("i tre lati possono formare un triangolo\n");
    }
    else
    {
        printf("i tre lati non possono formare un triangolo\n");
    }
     return(0);
}