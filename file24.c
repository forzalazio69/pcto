#include <stdio.h>

void pari(int a)
{
if(a%2==0)
{
    printf("il tuo numero è pari");
}
else
{
    printf("il tuo numero è dispari");
}
}

int main()
{
    printf("insersci un numero\n");
    int n; 
    scanf("%d", &n);
    pari(n);

     return(0);
}