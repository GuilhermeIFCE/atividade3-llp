#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o 1º número: ");
    scanf("%d", &num1);

    printf("Digite o 2º número: ");
    scanf("%d", &num2);

    if ( num1 % 2 == 0 && num2 % 2 == 0 ) {

        printf("Ambos são pares.\n");

    } else if ( num1 % 2 != 0 && num2 % 2 != 0) {

        printf("Ambos são ímpares.\n");

    } else {

        printf("Um é par e outro é ímpar.\n");

    }

    return 0;
}
