#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	const int LIN = 2, COL = 6;
	int num[LIN][COL], maiorNum, mult_3 = 0;
	float mediaLinha2 = 0.0, media = 0.0;
	
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("%i° número da %i° linha: ",j+1,i+1);
			scanf("%i", &num[i][j]);
			
			if((j == 0 || i == 0) || num[i][j] > maiorNum){
				maiorNum = num[i][j];
			}
			if(num[i][j] % 3 == 0){
				mult_3+= num[i][j];
			}
			if(i == 1){
				mediaLinha2 += num[1][j];
			}
			media+= num[i][j];
		}
		printf("\n");
	}
	if(mediaLinha2 > 0){
		mediaLinha2/=6;
	} else{
		mediaLinha2 = 0.0;
	}
	if(media > 0){
		media/=12;
	} else{
		media = 0.0;
	}
	printf("\n");
	printf("Maior número da matriz: %i \n", maiorNum);
	printf("Soma dos múltiplos de 3: %i \n", mult_3);
	printf("Média dos números da segunda linha: %.2f \n", mediaLinha2);
	printf("Média da matriz: %.2f \n", media);
	return 0;
}
