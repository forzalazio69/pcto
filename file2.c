#include <stdio.h>
int main()
{
    printf("inserisci la tua età\n");
    int n; 
    scanf("%d", &n);
    if (n>=18)
    {
        printf("sei maggiorenne\n");
    }
    else 
    {
        printf("sei minorenne\n");
    }
     return(0);
}