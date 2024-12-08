#include<stdio.h>

double Juros (double c, double m, double t)
{
    double juros = c * m * t;

    return juros;
}

 int main()
 {
    double c, m, t;

    scanf("%lf %lf %lf", &c, &m, &t);

    double j = Juros(c, m, t);

    printf("%.2lf", j);


  return 0;
 }
