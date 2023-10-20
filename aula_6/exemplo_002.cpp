#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	char str1[10], str2[10];
	int achou = 2;
	// determina os vetores str1 e str2
	printf("Entre com a 1° string: ");
	gets(str1);
	printf("Entre com a 2° string: ");
	gets(str2);
	// compara as strings
	for(int i = 0; str1[i] == str2[i]; i++){
		if(str1[i] == 0){
			achou = 1;
		}
	}
	// verifica se são iguais ou não
	if(achou == 1){
		printf("As strings são iguais");
	} else{
		printf("As strings são diferentes");
	}
	return 0;
}
