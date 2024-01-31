#include <stdio.h>
int main()
{
    printf("a quanti anni si puo prendere la patente nel tuo stato?\n");
    int n; 
    scanf("%d", &n);
    printf("inserisci la tua età\n");
    int numero2;
    scanf("%d", &numero2);
    if (numero2>=n)
    {
        printf("puoi prendere la patente\n");
    }
    else
    {
        printf("non puoi prendere la patente\n");
    }
     return(0);
}