#include <locale.h> // formatação de lingua
#include <iostream> // cout, cin e endl
#include <iomanip> // "%.2f"
#include <string> // std

int main(){
	setlocale(LC_ALL,"Portuguese");
	std::string nomes[5], maiorProd;
	float valores[5], media, maiorValor;
	int abaixoDe10 = 0, acimaMedia = 0;
	// Armazena valores dentro dos vetores <---
	for(int i = 0; i < 5; i++){
		// std -> string	|	cout = printf / cin = scanf <---
		std::cout << "Nome do produto: "; std::cin >> nomes[i];
		std::cout << "Valor: R$"; std::cin >> valores[i];
	}
	// Determina que os 1°s valores do vetor são os maiores <--
	maiorValor = valores[0];
	maiorProd = nomes[0];
	for(int i = 0; i < 5; i++){
		// Encontra os valores menores que 10 <---
		if(valores[i] < 10){
			abaixoDe10++;
		}
		// Soma da média <---
		media+= valores[i];
		// Compara os valores para descobrir o maior valor e o nome <---
		if(valores[i] > maiorValor){
			maiorValor = valores[i];
			maiorProd = nomes[i];
		}		
	}
	// Valores acima da média <---
	media = media / 5;
	for(int i = 0; i < 5; i++){
		if(valores[i] > media){
			acimaMedia++;
		}
	}
	// Listagem com nomes e valores dos produtos <---
	std::cout << "-------------------------------\n" << "Nomes			Vlr do Produto" << std::endl;
	for(int i = 0; i < 5; i++){
		// nomes do produto (espaço vazio) valor do produto <---
		std::cout << nomes[i] << "			R$" << valores[i] << std::fixed << std::setprecision(2) << std::endl;
	}
	// Imprimindo as respostas <---
	std::cout << "\n-------------------------" << std::endl; // endl = end line / fim da linha
	std::cout << "Quant de prod abaixo de R$10,00: " << abaixoDe10 << std::fixed << std::setprecision(2)<< std::endl;
	std::cout << "Média dos valores: R$" << media << std::fixed << std::setprecision(2) << std::endl; 
	std::cout << "Quant de prod acima da média: " << acimaMedia << std::endl;
	std::cout << "Prod com maior valor: " << maiorProd << ", R$" << maiorValor << std::fixed << std::setprecision(2) << std::endl;
	
	return 0;
}
