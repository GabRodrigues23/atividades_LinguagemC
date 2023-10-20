#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num, tabuada = 1, res;
	printf("Digite um número: ");
	scanf("%i",&num);	
	printf("\n-----> TABUADA DO %i <-----\n\n",num);
	
	while(tabuada < 11){
		res = tabuada * num;
		printf("\t%i x %i = %i\n",num,tabuada,res);
		tabuada++;	
	}
	
}
