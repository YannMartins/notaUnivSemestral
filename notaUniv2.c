#include <stdio.h>

int main(void){
	float nota1, nota2, nota3, nota11, nota12;
	float notaFinal;
	
	
	printf("Insira a sua nota na primeira disciplina, da primeira unidade: ");
	scanf("%f", &nota11);
	printf("Insira a sua nota na segunda disciplina, da primeira unidade: ");
	scanf("%f", &nota12);
	
	if (nota11 > nota12){
		nota1 = (6*nota11 + 4*nota12) / 10;
	}else{
		nota1 = (6*nota12 + 4*nota11) / 10;
	}
	printf("Sua nota na primeira unidade eh: %.2f\n", nota1);
	
	printf("\nInsira a sua nota na primeira disciplina, da segunda unidade: ");
	scanf("%f", &nota11);
	printf("Insira a sua nota na segunda disciplina, da segunda unidade: ");
	scanf("%f", &nota12);
	
	if (nota11 > nota12){
		nota2 = (6*nota11 + 4*nota12) / 10;
	}else{
		nota2 = (6*nota12 + 4*nota11) / 10;
	}
	printf("Sua nota na segunda unidade eh: %.2f\n", nota2);
	
	printf("\nInsira a sua nota na primeira disciplina, da terceira unidade: ");
	scanf("%f", &nota11);
	printf("Insira a sua nota na segunda disciplina, da terceira unidade: ");
	scanf("%f", &nota12);
	
	if (nota11 > nota12){
		nota3 = (6*nota11 + 4*nota12) / 10;
	}else{
		nota3 = (6*nota12 + 4*nota11) / 10;
	}
	printf("Sua nota na terceira unidade eh: %.2f\n", nota3);
	
	notaFinal = (nota1 + nota2 + nota3) / 3;
	
	printf("\nMedia total do semestre: %.2f\nO conceito do aluno eh: ", notaFinal);
	
	if( (notaFinal >= 9) && (notaFinal <= 10) ){
		printf("A.\n");
	}else if( (notaFinal >= 8) && (notaFinal < 9) ){
		printf("B.\n");
	}else if( (notaFinal >= 7) && (notaFinal < 8) ){
		printf("C.\n");
	}else if( (notaFinal >= 6) && (notaFinal < 7) ){
		printf("D.\n");
	}else if( (notaFinal >= 5) && (notaFinal < 6) ){
		printf("E.\n");
	}else if (notaFinal < 5){
		printf("F.\n");
	}else{
		printf("Desconhecido.\n");
	}
	
	return 0;
}
