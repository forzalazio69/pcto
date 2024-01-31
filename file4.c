#include <stdio.h>
int main()
{
    printf("insersci un numero\n");
    int n; 
    scanf("%d", &n);
    printf("inseisci un altro numero\n");
    int numero2;
    scanf("%d", &numero2);
    if (numero2%n==0)
    {
        printf("il secondo numero è un multiplo del primo\n");
    }
    else
    {
        printf("il secondo numero non è un multiplo del primo\n");
    }
     return(0);
}