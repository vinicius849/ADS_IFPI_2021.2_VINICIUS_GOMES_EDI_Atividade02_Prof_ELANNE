#include <stdio.h>
#include <stdlib.h>

/* Emita o resultado de uma pesquisa de opini�o p�blica a respeito das
elei��es presidenciais. O entrevistado dever� escolher entre 3 candidatos
(Serra = 45,Dilma = 13 ou Ciro Gomes = 23), ou ent�o responder: indeciso = 99,
outros = 98,nulo/branco = 0. O programa deve ler a opini�o de voto de cada entrevistado,
encerrando-se a pesquisa com a opini�o sendo igual a -1. Ao final, devem ser mostrados:
     - a porcentagem de cada candidato;
     - a porcentagem dos outros candidatos;
     - a porcentagem de eleitores indecisos;
     - a porcentagem de votos nulos/brancos;
     - o total de entrevistados;
     - uma mensagem indicando a possibilidade ou n�o de haver 2 turno. */
     
int main()
{
	int opiniao, cont_votos, total_resultado;
	float indecisos, cont_votos_brancos, cont_outros_votos, Serra, Dilma, Ciro;
	
	Serra = 0;
	Dilma = 0;
	Ciro = 0;
	cont_votos = 0;
	indecisos = 0;
	cont_votos_brancos = 0;
	cont_outros_votos = 0;
	
	printf("Qual � a sua opini�o: ");
	scanf("%d",&opiniao);
	
	while(opiniao != -1) {
		if (opiniao == 13) {
			Dilma++;
			cont_votos++;
		}else if (opiniao == 45) {
			Serra++;
			cont_votos++;
		}else if(opiniao == 23) {
			Ciro++;
			cont_votos++;
		}else if(opiniao == 99) {
			indecisos++;
			cont_votos++;
		}else if(opiniao == 98) {
			cont_outros_votos++;
			cont_votos++;
		}else if(opiniao == 0) {
			cont_votos_brancos++;
			cont_votos++;
		}else {
			printf("Voc� inseriu dados errados, tente novamente mais tarde.");
		}
			
	printf("\nVoc� inseriu uma nova opini�o.");
	scanf("%d",&opiniao);
	}
	
	total_resultado = cont_votos;
	Serra = (Serra / total_resultado) * 100;
	Dilma = (Dilma / total_resultado) * 100;
	Ciro = (Ciro / total_resultado) * 100;
	cont_outros_votos = (cont_outros_votos / total_resultado) * 100;
	indecisos = (indecisos / total_resultado) * 100;
	cont_votos_brancos = (cont_votos_brancos / total_resultado) * 100;
	
	printf("\nTotal de votos:%i",cont_votos);
	printf("\nOutros candidatos:%0.2f",cont_outros_votos);
	printf("\nIndecisos:%0.2f", indecisos);
	printf("\nNulos/Brancos:%0.2f",cont_votos_brancos);
	printf("\nTotal de votos:%i",cont_votos);
	printf("\nCiro:%0.2f || Dilma:%0.2f || Serra:%0.2f", Ciro, Dilma, Serra);
	
	if (Ciro >= 50 || Dilma >= 50 || Serra >= 50 || cont_outros_votos >= 50) {
		printf("\nN�o h� a necessidade de um segundo turno.");
	}else {
		printf("\nH� necessidade de um segundo turno.");
	}
	system("PAUSE");
}
	
			

