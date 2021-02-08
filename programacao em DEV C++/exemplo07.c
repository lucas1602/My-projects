/* Outro exemplo:
Crie uma função que receba duas variáveis (string1 e string2) e Diga quantas vezes a string 2
aparece na string1 */

#include<stdio.h>
#include<string.h>

int quantstrings(char string1[200], char string2[200]){
	int j, quant=0, cont=0, ref=0;
	
	if(strlen(string1) > strlen(string2)){
		return 0;
	}else{
		for(j = 0; j < strlen(string2); j++){
			if(string2[j] == string1[ref]){
				cont++;
				ref++;
			}else{
				cont = 0;
				ref = 0;
			}
			
			if(cont == strlen(string1)){
				quant++;
			}
		}
		
		return quant;
	}
}

main() {
	char string1[200], string2[200];
	
	printf("Digite a string que deseja procrar a outra: ");
	gets(string2);
	printf("\nDigite a string que deseja procurar na anterior: ");
	gets(string1);
	
	if(quantstrings(string1, string2) == 0){
		printf("\nNenhum valor encontrado ou voce digitou a string 1 maior que a 2.");
	}else{
		printf("\nA string aparece %d vezes na outra.", quantstrings(string1, string2));
	}
	
	getche();
}
