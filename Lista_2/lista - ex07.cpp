#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int num[10], div, qtd_impar = 0;
    float soma_primos = 0, media, soma = 0, qtd = 0;
    for(int i = 0; i < 10; i++){
        printf("Digite o %i° número: ",i+1);
        scanf("%i",&num[i]);
    }
    for(int i = 0; i < 10; i++){
        // Encontrar os impares e maiores que 10
        if(num[i] % 2 == 0){ // Verificar se é impar ou par
            qtd_impar = qtd_impar;
        } else if(num[i] > 10){ // Definir os ímpares maiores que 10
            qtd_impar++;
        }
        // Encontrar os multiplos de 3
        if(num[i] % 3 == 0){
            qtd++;
            soma+= num[i];
        }
        // Encontrar os primos
        div = 0;
        for(int k = 1; k <= num[i]; k++){
            if(num[i] % k == 0){
                div++;
            }
		}
        if(div == 2){
            soma_primos+= num[i];
        }
    }
    // Média dos multiplos de 3
    if(qtd > 0){
        media = soma / qtd;
    } else{
        media = 0;
    }
    printf("\nSoma dos primos: %.0f",soma_primos);
    printf("\nMédia dos números multiplos de 3: %.1f",media);
	printf("\nQuantidade dos ímpares maiores que 10: %i",qtd_impar);
	return 0;
}
