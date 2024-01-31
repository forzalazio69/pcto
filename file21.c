#include <stdio.h> 
int main()
{
    printf("inserisci l' ascissa di un punto\n");
    int x;
    scanf("%d", &x);
    printf("inserisci l' ordinata di un punto\n");
    int y;
    scanf("%d", &y);

    if (x==0 && y==0)
    {
        printf("il punto scelto è l'origine\n");
    } 
    else if (x==0 && y!=0)
    {
        printf("il punto si trova nell'asse dell'ascisse\n");
    }
    else if (x!=0 && y==0)
    {
        printf("il punto si trova nell'asse dell'ordinata\n");
    }
    else if (x>0 && y>0) 
    {
        printf("il punto si trova nel 1° quadrante\n");
    }
    else if (x>0 && y<0)
    {
        printf("il punto si trova nel 4° quadrante\n");
    }
    else if (x<0 && y<0)
    {
        printf("il punto si trova nel 3° quadrante\n");
    }
    else if (x<0 && y>0)
    {
        printf("il punto si trova nel 2° quadrante\n");
    }

    return(0);
}