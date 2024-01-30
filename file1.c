#include <stdio.h>
int main()
{
    printf ("quale è l'età media  della nostra fila?\n");
    printf ("scrivi la prima età\n");
    int numero3; 
    scanf ("%d", &numero3);
    printf("scrivi la seconda età\n");
    int numero1; 
    scanf("%d", &numero1);
    printf("scrivi la terza età\n");
    int numero2; 
    scanf("%d", &numero2);
    printf("scrivi la quarta età\n");
    int numero4; 
    scanf("%d", &numero4);
    int x = (numero1 + numero2 + numero3 + numero4) /4;
    printf ("l'età media è  %d\n", x);
    return(0);
}