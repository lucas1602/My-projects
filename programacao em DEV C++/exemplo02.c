/* Ap�s v�rios outros exemplos para compreender melhor sobre a programa��o em C,
aprendi sobre switch case e if else if else; 
E esse foi um dos exemplos:

Digite tr�s n�meros e imprima a sua m�dia, depois diga se essa m�dia � maior o igual a 7,
se for, imprima "maior ou igual", se n�o for, imprima "menor"*/

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
