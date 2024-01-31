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
    
    if (n==numero2 && n==numero3 && numero4>numero3 && numero5>n &&  numero6>numero2)
    {
        printf("il triangolo è equilatero\n");
    }
    else if (n!=numero2 && n!=numero3 && numero2!=numero3 && numero4>numero3 && numero5>n &&  numero6>numero2)
    {
        printf("il triangolo è scaleno\n");
    }
    else if (((n==numero2 && n!=numero3)||(n==numero3 && n!=numero2)||(numero2==numero3 && n!=numero2)) && numero4>numero3 && numero5>n &&  numero6>numero2 )
    {
        printf("il triangolo è isoscele\n");
    }
    else
    {
        printf("il triangolo non esiste");
    }
     return(0);
}