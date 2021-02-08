/* Outro exemplo:
Faça um programa que ordena um vetor de inteiros de tamanho recebido pelo usuario
*/
#include<stdio.h>

main() {
	float vet[200], temp;
	int tam, i, j;
	
	printf("Digite a quantidade de elementos: ");
	scanf("%d",&tam);
	
	for(i = 0; i < tam; i++){
		printf("Digite o %d numero: ",i+1);
		scanf("%f",&vet[i]);
		printf("\n");
	}
	
	for(i = 0; i < tam; i++){
		for(j = 0; j < tam; j++){
			if(vet[i] < vet[j]){
				temp = vet[i];
				vet[i] = vet[j];
				vet[j] = temp;
			}
		}
	}
	
	printf("\nORDEM CRESCENTE:\n");
	
	for(i = 0; i < tam; i++){
		printf("%.2f, ", vet[i]);
	}
}
