#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void num_par_impar();
void comparacao();
void num_primo();

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\t     Desafio de Matem�tica     \n\n\n");
	int num;
	printf("Digite um n�mero -> ");
	scanf ("%d", &num);
	
	num_par_impar(num);
	comparacao(num);
	num_primo(num);
	printf("\nO dobro de %d � %d\n", num, num*num);
	return 0;
}

void num_par_impar(int num){
	
	if(num%2 == 0){
		printf ("\n� par\n");
		printf ("N�o � impar\n");
	} else {
		printf ("\n� impar\n");
		printf ("N�o � par\n");
	}
	
}

void comparacao(int num){
	if(num>10){
		printf("� maior que 10\n");
	}
	else if (num == 10) {
		printf("� igual a 10\n");
	}
	else if (num<10) {
		printf("� menor que 10\n");	
	}
} 
	
void num_primo(int num){
		int i, counter = 0;
		for (i=1; i<=num; i++){
		if (num%i == 0)
		counter ++;
	} 
	if (counter == 2){
		printf("� primo",num);
	} 
	else {
		printf("N�o � primo",num);
	}
}


