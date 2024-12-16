#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    printf("Insira sua 1ª nota: ");
    scanf("%f", &nota1);

    printf("Insira sua 2ª nota: ");
    scanf("%f", &nota2);

    printf("Insira sua 3ª nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if ( media >= 7 ) {

        printf("Aprovado. Média %.1f\n", media);

    } else if ( media >= 5 && media < 7) {

        printf("Recuperação. Média: %.1f\n", media);

    } else if ( media < 5 ) {

        printf("Reprovado. Média: %.1f\n", media);

    }

    return 0;
}
