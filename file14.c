#include <stdio.h>
int main()
{
    printf("inserisci un numero\n");
    int x;
    scanf("%d\n", &x);
    int y;
    
   while (x>1)
   {
        
        y=x-1;
         
        if (x%y!=0)     
        {
            printf (" è un numero primo\n");
        }
        else
        {
            printf("non è un numero primo");
        }
    }
     return(0);
}
