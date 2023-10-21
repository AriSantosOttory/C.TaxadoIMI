#include <stdio.h>
#include <stdlib.h>

float lerValorPatrimonial() {
    float vp;
    printf("\nQual o valor Patrimonial? ");
    scanf("%f", &vp);
    return vp;
}

float lerTaxa() {
    float lt;
    printf("\nQual a taxa? ");
    scanf("%f", &lt);
    return lt;
}

void calcularImix(float vp, float lt) {
    printf("O valor a pagar de imi é %.2f€", vp * lt);
}

void calcularImiix(float vp, float lt) {
    if (vp < 100000) {
        printf("Necessita rever os valores de patrimônio");
    } else {
        printf("O valor a pagar de imi é %.2f€", vp * lt);
    }
}

int main() {
    float valorPatrimonial, taxa;

    valorPatrimonial = lerValorPatrimonial();
    taxa = lerTaxa();

    calcularImix(valorPatrimonial, taxa);
    calcularImiix(valorPatrimonial, taxa);

    return 0;
}


