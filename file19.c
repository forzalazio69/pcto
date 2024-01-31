#include <stdio.h>
void VocaleConsonante()
{
    printf("inserisci una lettera in minuscolo\n");
    char c;
    scanf(" %c", &c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        printf("%c è una vocale\n",c);
    }    
    else 
    {
        printf("%c è una consonante\n",c);
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