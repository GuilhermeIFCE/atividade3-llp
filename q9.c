#include <stdio.h>

int main() {
    float nota;
    int faltas;

    printf("Informe sua nota: ");
    scanf("%f", &nota);

    printf("Informe sua quantidade de faltas: ");
    scanf("%d", &faltas);

    if ( nota >= 9 && nota <= 10 ) {

        if ( faltas <= 20 ) {
            printf("A");
        } else if ( faltas > 20) {
            printf("B");
        }

    } else if ( nota >= 7.5 && nota <= 8.9 ) {

        if ( faltas <= 20 ) {
            printf("B");
        } else if ( faltas > 20) {
            printf("C");
        }

    } else if ( nota >= 5.0 && nota <= 7.4 ) {

        if ( faltas <= 20 ) {
            printf("C");
        } else if ( faltas > 20) {
            printf("D");
        }

    } else if ( nota >= 4.0 && nota <= 4.9 ) {

        if ( faltas <= 20 ) {
            printf("D");
        } else if ( faltas > 20) {
            printf("E");
        }

    } else if ( nota >= 0.0 && nota <= 3.9 ) {

        if ( faltas <= 20 ) {
            printf("E");
        } else if ( faltas > 20) {
            printf("E");
        }

    }

    return 0;
}
