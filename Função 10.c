#include <stdio.h>


int somaPares(int a, int b) {
    int soma = 0;


    if (a % 2 != 0) {
        a++;
    }


    for (int i = a; i < b; i += 2) {
        soma += i;
    }

    return soma;
}

int main() {
    int a, b;


    printf("Digite o primeiro numero (a): ");
    scanf("%d", &a);
    printf("Digite o segundo numero (b): ");
    scanf("%d", &b);


    if (a >= b) {
        printf("Erro: O primeiro numero deve ser menor que o segundo.\n");
        return 1;
    }

    //
    int soma = somaPares(a, b);
    printf("A soma dos numeros pares entre %d e %d é: %d\n", a, b, soma);

    return 0;
}
