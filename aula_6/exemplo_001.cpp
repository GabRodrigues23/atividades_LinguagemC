#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	char msg[10], msg2[10];
	int resu;
	// armazena os valores nos vetores msg e msg2
	printf("Digite a 1� Palavra: ");
	gets(msg);
	printf("Digite a 2� Palavra: ");
	gets(msg2);
	// verifica se os vetores s�o iguais
	resu = strcmp(msg,msg2); 
	/* 
	|	resu = -1 -> msg > msg2		| 
	|	resu = 1 -> msg < msg2		| 
	|	resu = 0 -> msg = msg2		|
	*/
	// confere o resultado da verifica��o e determina se s�o iguais ou n�o
	if(resu == 0){
		printf("As strings s�o iguais!");
	} else{
		printf("As strings s�o diferentes!");
	}
	return 0;
}

/* 
os vetores podem armazenar 10 valores, pois est�o declarados assim, mas 
o programa s� est� programado pra armazenar 1 valor
*/
