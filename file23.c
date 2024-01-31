#include <stdio.h>

double radiceQuadrata(double numero) {
  double approssimazione = numero / 2.0;
  double differenza = numero - approssimazione * approssimazione;
  while (differenza > 0.00001) {
    approssimazione = (approssimazione + numero / approssimazione) / 2.0;
    differenza = numero - approssimazione * approssimazione;
  }
  return approssimazione;
}

int main() {
  double numero = 10.89;
  double risultato = radiceQuadrata(num);
  printf("La radice quadrata di %lf è %lf", numero, risultato);
  return 0;
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
    Perimetro=n+numero3+numero3;
    printf("il perimetro del triangolo è %f\n" ,Perimetro);
    float Semiperimetro;
    Semiperimetro= Perimetro/2;
    float Area;
    double numero (Semiperimetro *(Semiperimetro-n)*(Semiperimetro-numero2)*(Semiperimetro-numero3));
    double risultato= radiceQuadrata (numero);
    printf("l'area del triangolo è %lf\n" ,risultato);


     return(0);
}