#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void num_par_impar();
void comparacao();
void num_primo();

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\t     Desafio de Matemática     \n\n\n");
	int num;
	printf("Digite um número -> ");
	scanf ("%d", &num);
	
	num_par_impar(num);
	comparacao(num);
	num_primo(num);
	printf("\nO dobro de %d é %d\n", num, num*num);
	return 0;
}

void num_par_impar(int num){
	
	if(num%2 == 0){
		printf ("\nÉ par\n");
		printf ("Não é impar\n");
	} else {
		printf ("\nÉ impar\n");
		printf ("Não é par\n");
	}
	
}

void comparacao(int num){
	if(num>10){
		printf("É maior que 10\n");
	}
	else if (num == 10) {
		printf("É igual a 10\n");
	}
	else if (num<10) {
		printf("É menor que 10\n");	
	}
} 
	
void num_primo(int num){
		int i, counter = 0;
		for (i=1; i<=num; i++){
		if (num%i == 0)
		counter ++;
	} 
	if (counter == 2){
		printf("É primo",num);
	} 
	else {
		printf("Não é primo",num);
	}
}


