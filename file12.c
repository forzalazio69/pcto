#include <stdio.h>
int main()
{
printf("inserisci un numero da fattorializzare\n");
int x=1;
int y=1;
int n;
scanf("%d", &n);

    while (x<=n)
    { 
        y=y*x;
        x=x+1;
       
        printf("%d\n",y);
    }
     
    
     return(0);
}