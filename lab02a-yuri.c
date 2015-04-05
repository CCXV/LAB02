#include <stdio.h>

/*
 * Yuri Manzano Costa
 * RA 178834
 * Lab02a - Coeficiente de Rendimento
 * 
 * 
 */

/* Funcao que retorna o valor do conceito */
int calc_conceito (char conceito_char)
{
	double valor;
	
		if (conceito_char == 'A') 
		return valor = 4;
		
		else if (conceito_char == 'B')
		return valor = 3;
		
		else if (conceito_char == 'C')
		return valor = 2;
		
		else if (conceito_char == 'D')
		return valor = 1;
		
		else if (conceito_char == 'E')
		return valor = 0;
		
}


int main()
{
	/* Variaveis */
	char conceito;
	double valor_conceito, nota, media_cima = 0, media_baixo = 0;
	int cont=0;	
	
	do
	{
		/* Le o primeiro conceito */
		scanf(" %c", &conceito);
		
		/* Caso o primeiro conceito seja '*' sai do loop */
		if(conceito == '*')
		{
			break;
		}
		
		/* Variavel auxiliar para imprimir caso o CR seja indefinido */
		cont++;

		/* Caso nao seja '*' le a nota e calcula a media parcial */
		if(conceito != '*')
		{
			scanf("%lf", &nota);
			valor_conceito = calc_conceito(conceito);
		
			media_cima += (valor_conceito * nota);
			media_baixo += nota;
			
		}
			
	}
	/* Executa o loop enquanto o conceito nao for * */
	while (conceito != '*');
	
	/* Imprime o CR ou caso ele seja indefinido imprime indefinido */
	if(cont > 0)
		printf("CR = %.4lf\n", media_cima / media_baixo);
		
	else 
		printf("CR = Indefinido\n");
	
	return 0;
}
