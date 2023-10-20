#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
    char vendedores[5][20], vendedor_maior_comissao[20];
    float vendas[5], comissao[5], total_vendas = 0.0, media_vendas, maior_comissao = 0.0;
    int acima_media = 0;
    
    for(int i = 0; i < 5; i++){
        printf("Nome do vendedor: ");
        scanf("%s",&vendedores[i]);
        printf("Total de vendas: R$");
        scanf("%f", &vendas[i]);
        
		total_vendas += vendas[i];
    }
    
    printf("\nListagem de vendedores e suas comissões:\n");
    for(int i = 0; i < 5; i++) {
        comissao[i] = vendas[i] * 0.1;
        printf("%s - Comissão: R$ %.2f\n",vendedores[i],comissao[i]);
    }
    
    media_vendas = total_vendas / 5;
    for(int i = 0; i < 5; i++) {
        if(vendas[i] > media_vendas) {
            acima_media++;
        }
        
        if(comissao[i] > maior_comissao) {
            maior_comissao = comissao[i];
            strcpy(vendedor_maior_comissao, vendedores[i]);
        }
	}
	
    printf("\nTotal bruto vendido pelos 5 vendedores: R$ %.2f\n", total_vendas);
    printf("Média do total de vendas: R$ %.2f\n",media_vendas);
    printf("Quantidade de vendedores que venderam acima da média: %d\n", acima_media);
    printf("Maior valor de comissão: R$ %.2f (vendedor: %s)\n", maior_comissao, vendedor_maior_comissao);

    return 0;
}
