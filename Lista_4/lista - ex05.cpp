#include <stdio.h>
#include <locale.h>
#define FILAS 10
#define ASSENTOS 10

void mostrarLayoutAssentos(char assentos[FILAS][ASSENTOS]) {
	printf("Layout dos Assentos:\n");
	for (int i = 0; i < FILAS; i++){
		for (int j = 0; j < ASSENTOS; j++) {
			printf("%c ", assentos[i][j]); 
		}
		printf("\n");
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	char assentos[FILAS][ASSENTOS];
	int fila, assento;
	
	for (int i = 0; i < FILAS; i++) {
		for (int j = 0; j < ASSENTOS; j++) {
		assentos[i][j] = 'O'; 
		} 
	}
	
	while(1){
		mostrarLayoutAssentos(assentos);
	
		printf("\nDigite a fila (valor negativo para encerrar): ");
		scanf("%i", &fila);
		if (fila < 0) {
			break;
		}
		printf("Digite o assento: ");
		scanf("%i", &assento);
		
		if (assentos[fila][assento] == 'O') {
			assentos[fila][assento] = 'X';
			printf("Assento reservado com sucesso!\n");
		} else{
			printf("Assento já está ocupado.\n");
		}
	}
	return 0;
}

