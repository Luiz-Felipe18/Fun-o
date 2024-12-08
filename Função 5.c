#include<stdio.h>

 double SomaPA (double a1, double an, int n)
 {
     double P = n * (a1 + an) / 2.0;

     return P;
 }

 int main()
 {
     double a1, an;
     int n;

     printf("Digite o primeiro termo da P.A.: ");
     scanf("%lf", &a1);

     printf("Digite o n-esimo termo da P.A.: ");
     scanf("%lf", &an);

     printf("Digite o numero de termos: ");
     scanf("%d", &n);

     double PA = SomaPA(a1, an, n);

     printf("%lf\n", PA);

     return 0;
 }
