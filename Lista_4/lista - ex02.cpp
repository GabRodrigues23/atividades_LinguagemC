#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	const int CONT = 10, FACE =  6;
    int dados[CONT], contagem[FACE] = {0};
    
	for(int i = 0; i < CONT; i++) {
        dados[i] = rand() % FACE + 1;
        contagem[dados[i] - 1]++;
    }

    printf("Resultados dos lancamentos:\n");
    for(int i = 0; i < FACE; i++){
        printf("Face %d: %d vezes\n", i + 1, contagem[i]);
    }
    return 0;
}

