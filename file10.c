#include <stdio.h>
int main()
{
    printf("inserisci il tuo anno di nascita\n");
    int n; 
    scanf("%d", &n);
    int numero2;
    numero2= 1969-n;
    int numero3;
    numero3= n-1969;
    if (n==1969)
    {
        printf("sei nato l'anno in cui l'uomo è sbarcato sulla luna\n");
    }
    else if (n<1969)
    {
        printf("sei nato %d anni prima dello sbarco sulla luna\n",numero2);
    }
    else 
    {
        printf("sei nato %d anni dopo lo sbarco sulla luna\n",numero3);
    }
     return(0);
}