#include <stdio.h>

int main() {
    float valorDoProduto, desconto, valorFinal, acrescimo;
    int formaDePagamento;

    printf("Insira o valor do produto: ");
    scanf("%f", &valorDoProduto);

    printf("Informe a forma de pagamento:\n");
    printf("1 - À vista\n2 - Parcelado em 2x\n3 - Parcelado em 3x\nEscolha: ");
    scanf("%d", &formaDePagamento);

    if ( formaDePagamento == 1 ) {

        desconto = valorDoProduto * 0.1;
        valorFinal = valorDoProduto - desconto;
        printf("Valor a pagar com desconto (10%%): %.2f\n", valorFinal);

    } else if ( formaDePagamento == 2 ){

        printf("Sua compra não sofre com descontos ou acrescimos, valor final: %.2f", valorDoProduto);

    } else if ( formaDePagamento == 3 ) {

        acrescimo = valorDoProduto * 0.05;
        valorFinal = valorDoProduto + acrescimo;
        printf("Devido sua compra ter sido com mais de 3 parcelas, será aplicado jurus à sua compra. Valor final: %.2f", valorFinal);

    }

    return 0;
}
