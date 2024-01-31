#include <stdio.h>
int main()
{
    printf("insersci una temperatura in gradi Celsius da convertire in Fahrenheit e Kelvin\n");
    float n; 
    scanf("%f", &n);
    float numero2;
    numero2= (n*9/5)+32;
    float numero3;
    numero3=n+273.15;
    if (n< -273.15)
    {
        printf("la tempreatura è sotto lo 0 assoluto e non esiste\n");
    }
    else
    {
        printf("la temperatura in gradi Fahrenheit è %f, mentre in gradi Kelvin è %f \n",numero2,numero3);
    }
     return(0);
}