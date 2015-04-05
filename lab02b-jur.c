/*
    Nome: Juliana de Oliveira Rodrigues
    RA: 171196
    Laboratorio 02b - Dolares Elficos

*/

#include <stdio.h>
#include <math.h>

int elficos;

/* Funcao que calcula o maior expoente na base casa */
int maiorExpoente(int casa) {

    int expoente, a = 0;

    /* Para cada expoente na base de casa, subir o valor
       do expoente ate atingir o valor dos dolares elficos */

    for (expoente=0; a <= elficos; expoente++) {
        a = pow(casa, expoente);
    }

    return (expoente-1);
}

/* Funcao que calcula o numero de notas por casa */
int numeroDeNotas(int casa, int maior_expoente) {

    int i = 0, potencia, valor = elficos, notas = 0;

    /* Para i igual ao maior expoente, i eh reduzido ate
       atingir zero e/ou ate o valor atingir zero */

    for (i = maior_expoente; i >= 0 && valor >= 0; i--) {

        potencia = pow(casa, i);

        /* Se a potencia for menor ou igual ao valor */

        if (potencia <= valor) {
            notas += valor/potencia;
            valor = (valor%potencia);
        }
    }

    return notas;
}

int main() {

    int maior_expoente, casas_de_cambio, ouro, conversao;
    int i, min_notas, casa = 0, notas;

    /* Numero minimo de notas estipulado pelos limites
       das variaveis */
    min_notas = pow(10,6);

    /* Le os valores de casas de cambio, ouro e taxa */
    scanf("%d %d %d", &casas_de_cambio, &ouro, &conversao);

    elficos = conversao*ouro;

    /* Le os tipos de notas para cada casa de cambio */
    for (i=0; (i != casas_de_cambio) && scanf("%d", &casa); i++) {

        maior_expoente = maiorExpoente(casa);
        notas = numeroDeNotas(casa, maior_expoente);

        /* Determina a menor quantidade de notas */
        if (notas < min_notas) min_notas = notas;
    }

    /* Imprime o menor numero de notas */
    printf("Numero minimo de notas = %d\n", min_notas);

    return 0;

}
