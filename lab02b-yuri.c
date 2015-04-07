#include <stdio.h>

int cambio(int pot, int gold)
{
    int pot_aux = pot, nota = 0;

    // Pega a Maior potencia MENOR que gold
    if(pot*pot <= gold)
    {
        do
        {
            // Potencia
            pot_aux = pot_aux * pot;
        }
        while(pot_aux * pot <= gold)
    }
    // Algoritmo que calcula o menor numero de notas para fazer gold
    while(pot_aux >= gold)
    {
        nota++;
        gold = gold - pot_aux;
        if(gold - pot_aux > 0)
        {
            pot_aux = pot_aux / pot;
        }

    }
    return nota;
}

int main()
{
    int i;
    int casas, gold, cambio;
    int potencias[21]
    int gold_exc = 0;

    scanf("%d %d %d", &casas, &gold, &cambio);

    gold_exc = gold * cambio;

    for(i=0;i<casas;i++)
    {
        scanf("%d", &potencias[1]);
    }



}
