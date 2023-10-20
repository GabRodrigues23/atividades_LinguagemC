#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	const int ALUNO = 5, NOTA = 3;
	int qtdMenor5, resu;
	float matriz[ALUNO][NOTA], menor, mediaAluno[ALUNO] = {0}, mediaClasse = 0;
	char nome[ALUNO][20], nomeMenor[20], busca[20], resp;

	for(int i = 0; i < ALUNO; i++){
		printf("Nome do Aluno: ");
		scanf("%s",&nome[i]);
		for(int j = 0; j < NOTA; j++){
			printf("Nota %i: ",j+1);
			scanf("%f",&matriz[i][j]);	
	
			// Soma M�dia Aluno
			mediaAluno[i]+= matriz[i][j];
			}
		// Quantidade de Alunos com nota menor que 5 na primeira avalia��o
		if(matriz[i][0] < 5){
			qtdMenor5++;
		}
		printf("\n");
	}
	
	printf("--------------------------------------------------\n\n");
	
	// Media dos Alunos | Soma Media da Classe | Menor M�dia
	menor = matriz[0][0];
	printf("NOME		M�DIA\n");
	for(int i = 0; i < ALUNO; i++){
		printf("%s		",nome[i]);
		mediaAluno[i]/= 3;	
		printf("%.1f\n",mediaAluno[i]);
	
		mediaClasse+= mediaAluno[i];
	
		for(int j = 0; j < NOTA; j++){
			if(matriz[i][j] < menor){
				menor = mediaAluno[i];
				strcpy(nomeMenor, nome[i]);			
			}
		}
	}
	
	printf("\n\n");
	
	// M�dia da Classe
	if(mediaClasse > 0){
		mediaClasse/= 5;
	} else{
		mediaClasse = 0;
	}
	printf("M�dia da Classe: %.1f\n",mediaClasse);
	printf("%s tirou a menor m�dia: %.1f\n",nomeMenor, menor);
	printf("Quantidade de Alunos com a nota inferior a 5 na primeira avalia��o: %i\n",qtdMenor5);
	
	// Busca pelo nome
	printf("\nDeseja Buscar algum aluno? (s/n): ");
	scanf("%s",&resp);
	// Verificar se o usu�rio quer buscar um nome
	while(resp == 's'){
		printf("Digite o nome do Aluno: ");
		scanf("%s",&busca);
			
		// Procurar o nome do aluno pesquisado
		for(int i = 0; i < ALUNO; i++){
			resu = strcmp(nome[i], busca);
	
			// Quando nome for encontrado printar as informa��es
			if(resu == 0){
				printf("\n\n%s\n",nome[i]);
				for(int j = 0; j < NOTA; j++){
					printf("Nota %i: %.1f\n",j+1,matriz[i][j]);	
				}
			printf("M�dia: %.1f\n",mediaAluno[i]);
			break;
			}  
		}
		// Quando nome n�o for encontrado
		if(resu != 0){
			printf("Nome n�o encontrado, verifique e tente novamente!");
		}
		// Verificar se o usu�rio deseja buscar outro nome
		printf("\n\nDeseja Buscar algum outro aluno? (s/n): ");
		scanf("%s",&resp);
	}
	
	printf("\nFim do Programa! :D");
	
	return 0;
}
