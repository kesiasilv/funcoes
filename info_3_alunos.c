#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//exemplo 3

// Definição da struct Aluno
#define N 50
struct Aluno {
	char nome[N];
	int idade;
	float notas[3]; // Array para armazenar notas(por exemplo, 3 notas)
};

    typedef struct Aluno Aluno;


void lerDadosAlunos(struct Aluno Aluno[3]){
    for (int i = 0; i <3; i++)
    {
    printf("==========================\n");
    printf("Digite o nome do aluno: ");
	scanf("%s", Aluno[i].nome);
    fflush(stdin);

	printf("Digite a idade do aluno: ");
	scanf("%d", &Aluno[i].idade);
    fflush(stdin);
	
	printf("Digite as 3 notas do aluno:\n");
	for (int x = 0; x < 3; x++) {
	printf("Nota %d: ", x + 1);
	scanf("%f", &Aluno[i].notas[x]);
    fflush(stdin);
    }
    }
}

void impriDadosAluno(struct Aluno Aluno[3]){
    for(int i = 0; i<3; i++){
    printf("==========================\n");
    printf("\nInformacoes do Aluno:\n");
	printf("Nome: %s\n", Aluno[i].nome);
	printf("Idade: %d\n", Aluno[i].idade);

    for(int x = 0; x<3; x++){
        printf("Notas %d: %.2f\n", i + 1, Aluno[i].notas[x]);
    }
    printf("==========================\n");
}
}

int main() {
    Aluno dados[3];

    lerDadosAlunos(dados);
    impriDadosAluno(dados);

return 0;
}
