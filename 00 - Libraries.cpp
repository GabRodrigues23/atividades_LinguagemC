/* aula 1 / aula 3
			Libraries
----------------------------------
#include -> usado para incluir uma biblioteca no c�digo (ex: #include <librarie>
.h -> arquivos com essa extens�o n�o s�o bibliotecas mas arquivos de cabe�alhos com prot�tipos de fun��es

<stdio.h>
printf() - imprime a informa��o dada
scanf() - escaneia a informa��o recebida / necess�rio declarar e chamar a vari�vel ("%x",&variavel)
gets() - le todos os caracteres digitados em forma de string / scanf() n�o le -> precisa do &

<locale.h>
setlocale(LC_AL,"Idioma") - configura o c�digo permitindo impress�o acentos ou letras referentes ao idioma informado

<conio.h>
getch() - espera o usu�rio apertar alguma tecla para continuar
getche() - espera o usu�rio apertar alguma tecla para continuar e imprime a tecla digitada
clrscr - limpa a tela
system() - usado para utilizar os seguintes comandos:
	gotoxy - posiciona o cursor nas coordenadas x e y
	kbhit - testa se alguma tecla foi apertada - necess�rio o comando getch ou getche
	delline - apaga a linha que contem o cursor
	textcolor - muda a cor do texto
	textbackgroun - muda a cor do fundo
	cprintf - imprime na tela textos coloridos
	
<iostream>
declara��es da biblioteca b�sica de entrada - sa�da do C++.
cout >> - semelhante ao printf() / imprime a informa��o dada
cin << semelhante ao scanf() / Escaneia a informa��o recebida
endl - indica ao leitor o fim de uma linha

<stdlib.h>
system() - usado para utilizar os seguintes comandos:
	pause - pausa a tela esperanto apertar uma tecla para finalizar o programa
	clr - limpar a tela
	
<string.h>
possibilita a leitura de strings
strcpy() - copia uma string ou vetor para outro vetor de caracteres
strlen() - retorna o tamanho de uma string (length)
strcmp() - compara duas strings e retorna um n�mero inteiro, caractere por caractere, a� que um NULL seja encontrado
	positivo (1� string maior que a 2�), negativo (2� string maior que a 1�), 0 (strings id�nticas)
strcat() - concatena a 2� string no final da 1� string / ex: nome e sobrenome
toupper() - recebe como par�metro um caractere e retorna sua vers�o em mai�sculo
tolower() - recebe como par�metro um caractere e retorna sua vers�o em min�sculo
strupr() - converte uma string em mai�sculas } n�o fazem parte da biblioteca padr�o da linguagem C, portanto
strlwr() - converte uma string em min�sculas } funcionam apenas no SO Windows
fflush(stdin) - o scanf() mant�m a tecla ENTER dentro do buffer da v�riavel, enquanto o gets() n�o, por�m com
	fflush(stdin) esse problema � contornado, limpando o buffer e lendo da maneira correta
*/
