#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Informe seu peso: ");
    scanf("%f", &peso);

    printf("Informe sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if ( imc < 18.5 ) {

        printf("Seu IMC é de %.2f você está abaixo do peso.\n", imc);

    } else if ( imc > 18.5 && imc < 24.9 ) {

        printf("Seu IMC é de %.2f você está no peso normal.\n", imc);

    } else if ( imc > 25 && imc < 29.9 ) {

        printf("Seu IMC é de %.2f você está acima do peso.\n", imc);

    } else {

        printf("Seu IMC é de %.2f você está em estado de obesidade.\n", imc);

    }

    return 0;
}
