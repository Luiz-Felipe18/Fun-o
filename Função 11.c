#include <stdio.h>


 int imprimirDivisores(int numero) {
    if (numero <= 0) {
        printf("O numero deve ser positivo.\n");
        return;
    }

    printf("Os divisores do numero %d sao: ", numero);
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int numero;

    scanf("%d", &numero);

    imprimirDivisores(numero);

    return 0;
}
