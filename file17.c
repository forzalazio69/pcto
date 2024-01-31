#include <stdio.h>
int main()
{
    int x;
    float y;
    while(x>0)
    {
        printf ("inserisci il nuemro di pezzi\n");
        scanf("%d", &x);
        if (x<30 && x>0)
        { 
            y=x*5;
        }
        else if (x>=30 && x<50)
        {
            y=x*4.5;
        }
        else if (x>=50)
        {
            y=x*4.25;
        }
        else 
        {
            y=0;  
        }
        printf("il prezzo è %f\n",y);
    }
     return(0);
}