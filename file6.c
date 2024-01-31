#include <stdio.h>
int main()
{
    printf("insersci un numero\n");
    float n; 
    scanf("%f", &n);
    printf("inseisci un altro numero\n");
    float numero2;
    scanf("%f", &numero2);
    printf("inserisci un altro numero\n");
    float numero3;
    scanf("%f", &numero3);
    float numero4;
    numero4=numero2-n;
    float numero5;
    numero5=numero3-numero2;
    if (numero4==numero5)
    {
        printf("i tre numeri sono in progressione aritmetica\n");
    }
    else
    {
        printf("i tre numeri non sono in progressione aritmetica\n");
    }
     return(0);
}