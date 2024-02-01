#include <stdio.h>

float risultatoarea(float areasenzaradice)
{


    float temp, sqrt;

    sqrt = areasenzaradice / 2;
    temp = 0;

    while(sqrt != temp){
        
        temp = sqrt;

        
        sqrt = ( areasenzaradice/temp + temp) / 2;
    }
      return sqrt;
}

int main()
{
    printf("insersci la lunghezza di un lato di un triangolo\n");
    float n; 
    scanf("%f", &n);
    printf("inseisci la lunghezza di un altro lato di un triangolo\n");
    float numero2;
    scanf("%f", &numero2);
    printf("inseisci la lunghezza di un altro lato di un triangolo\n");
    float numero3;
    scanf("%f", &numero3);
    float Perimetro;
    Perimetro=n+numero2+numero3;
    printf("il perimetro del triangolo è %f\n" ,Perimetro);
    float semiperimetro;
    semiperimetro=Perimetro/2;
     float areasenzaradice;
    areasenzaradice= (semiperimetro*(semiperimetro-n)*(semiperimetro-numero2)*(semiperimetro-numero3));
    
    float area;
    area=risultatoarea(areasenzaradice);
    printf("l'area del triangolo è %f\n",area);

     return(0);
}