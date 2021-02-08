/* Após vários outros exemplos para compreender melhor sobre a programação em C,
aprendi sobre switch case e if else if else; 
E esse foi um dos exemplos:

Digite três números e imprima a sua média, depois diga se essa média é maior o igual a 7,
se for, imprima "maior ou igual", se não for, imprima "menor"*/

#include<stdio.h>

main(){
	float n1, n2, n3, media;
	
	printf("Digite tres numeros separados por espaco: ");
	scanf("%f %f %f",&n1,&n2,&n3);
	
	media = (n1+n2+n3)/3;
	
	printf("Media: %f",media);
	
	if(media >= 7){
		printf("\nMaior ou igual");
	}else{
		printf("\nMenor");
	}
}
