#include <stdio.h>

int main() {
    int hEntrada, mEntrada;
    int hSaida, mSaida;
    int horaFinal, minutoFinal, tempoEmMinutos;
    float valorFinal;

    scanf("%d %d", &hEntrada, &mEntrada);
    scanf("%d %d", &hSaida, &mSaida);

    if(hEntrada > hSaida){
        horaFinal = (hSaida + 24) - hEntrada;
    }else{
        horaFinal = hSaida - hEntrada;
    }

    if(mEntrada > mSaida){
        minutoFinal = (mSaida + 60) - mEntrada;
    }else{
        minutoFinal = mSaida - mEntrada;
    }

    printf("Tempo de estacionamento: %d horas e %d minutos", horaFinal, minutoFinal);

    tempoEmMinutos = horaFinal * 60 + minutoFinal;

    if(tempoEmMinutos <= 60) {
        valorFinal = 1.00;
    }else if(tempoEmMinutos > 60 && tempoEmMinutos <= 120){
        valorFinal = 2.00;
    }else if(tempoEmMinutos > 120 && tempoEmMinutos <= 180){
        valorFinal = 4.20;
    }else if(tempoEmMinutos > 180 && tempoEmMinutos <= 240){
        valorFinal = 5.60;
    }else if(tempoEmMinutos > 240){
        valorFinal = horaFinal * 2;
    }

    printf("\nO Valor a ser pago e: R$ %.2f\n", valorFinal);

    return 0;
}
