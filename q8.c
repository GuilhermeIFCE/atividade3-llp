#include <stdio.h>

int main() {
    float altura, peso;

    printf("Informe sua altura: ");
    scanf("%f", &altura);

    printf("Informe seu peso: ");
    scanf("%f", &peso);

    if ( altura < 1.20 ) {

        if ( peso <= 60 ) {
            printf("A\n");
        } else if ( peso > 60 && peso >= 90 ) {
            printf("D\n");
        } else if ( peso > 90 ) {
            printf("G\n");
        }

    } else if ( altura >= 1.20 && altura < 1.70 ) {

        if ( peso <= 60 ) {
            printf("B\n");
        } else if ( peso > 60 && peso <= 90 ) {
            printf("E\n");
        } else if ( peso > 90 ) {
            printf("H\n");
        }

    } else if ( altura > 1.70 ) {

        if ( peso <= 60 ) {
            printf("C\n");
        } else if ( peso > 60 && peso >= 90 ) {
            printf("F\n");
        } else if ( peso > 90 ) {
            printf("I\n");
        }

    }

    return 0;
}
