#include <stdio.h>

int main (){
	int idade, meses;
	printf ("Insira a sua idade: ");
	scanf ("%d",&idade);
	meses = idade*12;
	for (int i=1; i<=meses; i++){
		printf("Hello World!!\t");
	}
	printf ("Voce ja viveu %d meses",meses);
}
