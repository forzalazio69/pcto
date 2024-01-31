#include <stdio.h>
void VocaleConsonante()
{
    printf("inserisci un numero\n");
    float x;
    scanf(" %f", &x);
    printf("inserisci un altro nuemro\n");
    float y;
    scanf(" %f", &y);
    printf("quale operazione vuoi eseguire tra questi due numeri?\n scegli tra + - * /\n");
    char z; 
    scanf(" %f",z);
    float n=x+y;
    float m=x-y;
    float l=x*y;

    if(z=='+')
    {
        printf("la somma tra i due numeri è %f\n",n);
    }    
    else if(z=='-')
    {
        printf("la differenza tra i due numeri è %f\n",m);
    }
    else if(z=='*')
    {
        printf("il prodotto tra i due numeri è %f\n",l);
    }
    
     
}
int main ()
{
    VocaleConsonante();
    VocaleConsonante();
    VocaleConsonante();
    VocaleConsonante();
return(0);
}