/* Ap�s outros exemplos de if, aprendi sobre la�os de repeti��es e fun��es
e esse foi um dos exemplos:

Escreva uma fun��o em C que diga se um numero digitado � primo ou n�o*/
#include<stdio.h>

int Isprimo(int num){
	int i, qnt = 0;
	
	for(i = 1; i <= num; i++){
		if(num % i == 0){
			qnt++;
		}
	}
	
	if(qnt == 2){
		return 1;
	}else{
		return 0;
	}
}

main(){
	int num;
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	if(Isprimo(num)){
		printf("Primo");
	}else{
		printf("Nao primo");
	}
}
