#include <stdio.h>
int main()
{
    int x=0;
    float somma =0;
    float numeri=0;
    
    while (x>-1)
    {
    printf ("inserisci un numero\n");
    scanf("%d", &x);
    somma =somma+x;
    numeri= numeri+1;
    printf("Media=%f\n",somma/numeri);
    }
     
    ;
     return(0);
}
