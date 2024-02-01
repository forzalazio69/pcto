#include <stdio.h>
int main()
{
    char stringa[100];                              
    scanf("%s",stringa);
    int x=0;
    while (stringa[x]!='\0')
    {
        
        if (stringa[x]>='a' && stringa[x]<='z')
        {
            stringa[x]=stringa[x]-32;
        }
        x=x+1;
    }
    printf("%s",stringa);
 return(0);



}