#include <locale.h>
#include <string.h>
#include <iostream>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int vetA[5], vetB[5];
	float metade;
	
	for(int i = 0; i < 5; i++){ // armazenar os n�meros do vetor <-
		std::cout << "Digite o " << i+1 << "� n�mero: "; 
		std::cin >> vetA[i];
		
		metade = vetA[i] / 2;
		vetB[i] = metade;
	}
	for(int i = 0; i < 5; i++){
		std::cout << "Vetor A: " << vetA[i] << std::endl;
		std::cout << "Vetor B: " << vetB[i]<< std::endl;
	}
}
