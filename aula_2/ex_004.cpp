#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float sal, novo_sal, reajuste;
	int porc;
	printf("Digite o seu sal�rio: ");
	scanf("%f",&sal);
	if(sal <= 280){
		porc = 20;
		reajuste = sal * 0.20;
		novo_sal = sal + reajuste;
	} else if(sal > 280 && sal <= 700){
		porc = 15;
		reajuste = sal * 0.15;
		novo_sal = sal + reajuste;
		} else if(sal > 700 && sal <= 1500){
		porc = 10;
		reajuste = sal * 0.10;
		novo_sal = sal + reajuste;	
		} else{
		porc = 5;
		reajuste = sal * 0.05;
		novo_sal = sal + reajuste;	
		}

printf("Seu sal�rio era de R$%.2f.\nVoc� recebeu um reajuste de %i%%, que � equivalente � R$%.2f\nSeu novo sal�rio � de R$%.2f!",sal,porc,reajuste,novo_sal);
return 0;
}
