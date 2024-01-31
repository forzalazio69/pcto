#include <stdio.h>
int main()
{
   int x=0;
  int somma=0;

   while (x<100)
   {
        x=x+1;
        somma = somma +x;
    }
     
    printf("%d",somma);
     return(0);
}