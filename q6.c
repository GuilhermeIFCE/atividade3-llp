#include <stdio.h>

int main() {
    int idade, tempoDeServico;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    printf("Informe seu tempo de serviço: ");
    scanf("%d", &tempoDeServico);

    if ( idade >= 65 || tempoDeServico >= 30) {

        printf("Pode se aposentar.\n");

    } else if ( idade >= 60 && tempoDeServico >= 25 ) {

        printf("Pode se aposentar.\n");

    } else {

        printf("Não pode se aposentar.\n");

    }

    return 0;
}
