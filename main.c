#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


typedef struct Aluno{
	char nome[50];
	int matricula;
	float n1, n2;
	float media;
} Aluno;


int main(int argc, char *argv[]) {
	printf("Escola do seu ze\n");
	
	Aluno vetAluno[5];
	
	//float media;
	int i;
	for(i = 0; i <= 1; i++){
		printf("Digite o nome do aluno:\n");
		scanf("%s", &vetAluno[i].nome);
		
		printf("Digite a matricula do aluno:\n");
		scanf("%d", &vetAluno[i].matricula);
		
		printf("Digite a primeira nota do aluno:\n");
		scanf("%f", &vetAluno[i].n1);
		
		printf("Digite a segunda nota do aluno:\n");
		scanf("%f", &vetAluno[i].n2);
		
	}
	
	float media, soma = 0;
	for(i = 0; i <= 1; i++){
		soma = vetAluno[i].n1 + vetAluno[i].n2;
		media = soma / 2;
		printf("=================================\n");
		printf("Nome do aluno: %s\n", vetAluno[i].nome);		
		printf("Matricula do aluno: %i\n", vetAluno[i].matricula);
		printf("Media: %f\n", media);
		printf("=================================\n");

	}
	
	
}
