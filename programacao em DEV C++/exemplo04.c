/* Outro exemplo: 
Crie uma função que diga se um determinado vetor de inteiros de tamanho recebido pelo usuário é 
ou não decrescente. */

#include<stdio.h>

int is_decrescent(float vet[200], int tam){
	int i, dec = 0;
	
	for(i = 0; i < tam; i++){
		if(vet[i] > vet[i+1] && i != tam-1){
			dec++;
		}
	}
	
	if(dec == tam-1){
		return 1;
	}else{
		return 0;
	}
}

main() {
	float vet[200];
	int tam, i;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d",&tam);
	
	for(i = 0; i < tam; i++){
		printf("Digite o %d numero: ", i+1);
		scanf("%f",&vet[i]);
		printf("\n");
	}
	
	if(is_decrescent(vet, tam)){
		printf("O vetor eh perfeitamente decrescente!");
	}else{
		printf("O vetor nao eh decrescente");
	}
}
