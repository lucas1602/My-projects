/* Ap�s aprender os comandos b�sicos em C (printf, scanf, system, operadores e etc),
aprendi a diferen�a entre software e hardware e mem�ria ram e mem�ria HD (que eu j� sabia na verdade);
Com isso eu estava preparado para aprender sobre vari�veis e esse foi o primeiro exerc�cio:

Crie um programa que leia dois n�meros e imprima-os em um �nico printf em linahs diferentes */

#include<stdio.h>

main(){
	int n1, n2;
	
	printf("Digite dois numeros separados por espaco: ");
	scanf("%d %d",&n1,&n2);
	
	printf("O primeiro numero digitado foi: %d\nO segundo numero digitado foi: %d", n1,n2);
}
