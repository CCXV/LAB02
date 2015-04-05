/*
    Nome: Juliana de Oliveira Rodrigues
    RA: 171196
    Laboratorio 02a - Coeficiente de Rendimento

*/

#include <stdio.h>

int main() {

    char conceito;
    int carga = 0, peso = 0, divisor = 0;
    double cr, dividendo = 0;

    /* Enquanto houver entrada e ela for diferente de * executar... */
    while ((scanf(" %c", &conceito)) && conceito != '*') {

        /* Le o valor da carga horaria */
        scanf("%d", &carga);

        /* Atribui peso aos conceitos */
        if (conceito == 'A')  peso = 4;
        if (conceito == 'B')  peso = 3;
        if (conceito == 'C')  peso = 2;
        if (conceito == 'D')  peso = 1;
        if (conceito == 'E')  peso = 0;

        /* Calcula o dividendo e o divisor */
        dividendo += ((double)peso*carga);
        divisor += carga;

    }

    /* Se nao houver entradas, o CR eh indefinido */
    if (divisor == 0)
        printf ("CR = Indefinido\n");

    /* Para os demais casos, imprima na tela o CR */
    else {
        cr = dividendo/divisor;
        printf("CR = %.4f\n", cr);
    }

    return 0;

}
