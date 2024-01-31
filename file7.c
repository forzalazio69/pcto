#include <stdio.h>
int main()
{
    printf("inserisci un anno\n");
    int n; 
    scanf("%d", &n);
    
    if ((n%4==0 && n%100!=0)||n%400==0)
    {
        printf("il tuo anno è bisestile\n");
    }
    else
    {
        printf("il tuo anno non è bisestile\n");
    }
     return(0);
}