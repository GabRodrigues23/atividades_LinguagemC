/* aula 1 / aula 3
			Libraries
----------------------------------
#include -> usado para incluir uma biblioteca no código (ex: #include <librarie>
.h -> arquivos com essa extensão não são bibliotecas mas arquivos de cabeçalhos com protótipos de funções

<stdio.h>
printf() - imprime a informação dada
scanf() - escaneia a informação recebida / necessário declarar e chamar a variável ("%x",&variavel)
gets() - le todos os caracteres digitados em forma de string / scanf() não le -> precisa do &

<locale.h>
setlocale(LC_AL,"Idioma") - configura o código permitindo impressão acentos ou letras referentes ao idioma informado

<conio.h>
getch() - espera o usuário apertar alguma tecla para continuar
getche() - espera o usuário apertar alguma tecla para continuar e imprime a tecla digitada
clrscr - limpa a tela
system() - usado para utilizar os seguintes comandos:
	gotoxy - posiciona o cursor nas coordenadas x e y
	kbhit - testa se alguma tecla foi apertada - necessário o comando getch ou getche
	delline - apaga a linha que contem o cursor
	textcolor - muda a cor do texto
	textbackgroun - muda a cor do fundo
	cprintf - imprime na tela textos coloridos
	
<iostream>
declarações da biblioteca básica de entrada - saída do C++.
cout >> - semelhante ao printf() / imprime a informação dada
cin << semelhante ao scanf() / Escaneia a informação recebida
endl - indica ao leitor o fim de uma linha

<stdlib.h>
system() - usado para utilizar os seguintes comandos:
	pause - pausa a tela esperanto apertar uma tecla para finalizar o programa
	clr - limpar a tela
	
<string.h>
possibilita a leitura de strings
strcpy() - copia uma string ou vetor para outro vetor de caracteres
strlen() - retorna o tamanho de uma string (length)
strcmp() - compara duas strings e retorna um número inteiro, caractere por caractere, aé que um NULL seja encontrado
	positivo (1° string maior que a 2°), negativo (2° string maior que a 1°), 0 (strings idênticas)
strcat() - concatena a 2° string no final da 1° string / ex: nome e sobrenome
toupper() - recebe como parâmetro um caractere e retorna sua versão em maiúsculo
tolower() - recebe como parâmetro um caractere e retorna sua versão em minúsculo
strupr() - converte uma string em maiúsculas } não fazem parte da biblioteca padrão da linguagem C, portanto
strlwr() - converte uma string em minúsculas } funcionam apenas no SO Windows
fflush(stdin) - o scanf() mantém a tecla ENTER dentro do buffer da váriavel, enquanto o gets() não, porém com
	fflush(stdin) esse problema é contornado, limpando o buffer e lendo da maneira correta
*/
