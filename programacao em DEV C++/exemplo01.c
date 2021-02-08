/* Após aprender os comandos básicos em C (printf, scanf, system, operadores e etc),
aprendi a diferença entre software e hardware e memória ram e memória HD (que eu já sabia na verdade);
Com isso eu estava preparado para aprender sobre variáveis e esse foi o primeiro exercício:

Crie um programa que leia dois números e imprima-os em um único printf em linahs diferentes */

#include<stdio.h>

main(){
	int n1, n2;
	
	printf("Digite dois numeros separados por espaco: ");
	scanf("%d %d",&n1,&n2);
	
	printf("O primeiro numero digitado foi: %d\nO segundo numero digitado foi: %d", n1,n2);
}
