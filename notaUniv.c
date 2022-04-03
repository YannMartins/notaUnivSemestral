#include <stdio.h>

int main(void){
	float nota1, nota11, nota12;
	float nota2, nota21, nota22;
	float nota3, nota31, nota32;
	float notaFinal;
	
	
	printf("Insira a sua nota na primeira disciplina, da primeira unidade: ");
	scanf("%f", &nota11);
	printf("Insira a sua nota na segunda disciplina, da primeira unidade: ");
	scanf("%f", &nota12);
	
	if (nota11 > nota12){
		printf("\nA nota da primeira disciplina eh a maior, sendo assim: \n");
		nota1 = (6*nota11 + 4*nota12) / 10;
		printf("Sua nota na primeira unidade eh: %.2f\n", nota1);
	}else{
		printf("\nA nota da segunda disciplina eh a maior, sendo assim: \n");
		nota1 = (6*nota12 + 4*nota11) / 10;
		printf("Sua nota na primeira unidade eh: %.2f\n", nota1);
	}
	
	printf("\nInsira a sua nota na primeira disciplina, da segunda unidade: ");
	scanf("%f", &nota21);
	printf("Insira a sua nota na segunda disciplina, da segunda unidade: ");
	scanf("%f", &nota22);
	
	if (nota21 > nota22){
		printf("\nA nota da primeira disciplina eh a maior, sendo assim: \n");
		nota2 = (6*nota21 + 4*nota22) / 10;
		printf("Sua nota na segunda unidade eh: %.2f\n", nota2);
	}else{
		printf("\nA nota da segunda disciplina eh a maior, sendo assim: \n");
		nota2 = (6*nota22 + 4*nota21) / 10;
		printf("Sua nota na segunda unidade eh: %.2f\n", nota2);
	}
	
	printf("\nInsira a sua nota na primeira disciplina, da terceira unidade: ");
	scanf("%f", &nota31);
	printf("Insira a sua nota na segunda disciplina, da terceira unidade: ");
	scanf("%f", &nota32);
	
	if (nota31 > nota32){
		printf("\nA nota da primeira disciplina eh a maior, sendo assim: \n");
		nota3 = (6*nota31 + 4*nota32) / 10;
		printf("Sua nota na terceira unidade eh: %.2f\n", nota3);
	}else{
		printf("\nA nota da segunda disciplina eh a maior, sendo assim: \n");
		nota3 = (6*nota32 + 4*nota31) / 10;
		printf("Sua nota na terceira unidade eh: %.2f\n", nota3);
	}
	
	notaFinal = (nota1 + nota2 + nota3) / 3;
	
	printf("\nMedia total do semestre = %.2f\n", notaFinal);
	
	if( (notaFinal >= 9) && (notaFinal <= 10) ){
		printf("O conceito do aluno eh: A.\n");
	}else if( (notaFinal >= 8) && (notaFinal < 9) ){
		printf("O conceito do aluno eh: B.\n");
	}else if( (notaFinal >= 7) && (notaFinal < 8) ){
		printf("O conceito do aluno eh: C.\n");
	}else if( (notaFinal >= 6) && (notaFinal < 7) ){
		printf("O conceito do aluno eh: D.\n");
	}else if( (notaFinal >= 5) && (notaFinal < 6) ){
		printf("O conceito do aluno eh: E.\n");
	}else {
		printf("O conceito do aluno eh: F.\n");
	}
	
	return 0;
}
