#include <stdio.h>
#include <math.h>


double calcularRaizes(double a, double b, double c) {
    if (a == 0) {
        printf("Coeficiente 'a' nao pode ser zero. Nao e uma equacao do segundo grau.\n");
        return;
    }

    double delta = b * b - 4 * a * c;

    if (delta > 0) {

        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As duas raizes da equacao sao:\n");
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    } else if (delta == 0) {

        double x = -b / (2 * a);
        printf("A equacao tem uma unica raiz:\n");
        printf("x = %.2lf\n", x);
    } else {

        printf("Nao existem raizes reais.\n");
    }
}

int main() {
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);



    calcularRaizes(a, b, c);

    return 0;
}
