#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//exemplo 3

// Definição da struct Aluno
#define N 50
struct Aluno {
	char nome[N];
	int idade;
	double notas[3]; // Array para armazenar notas(por exemplo, 3 notas)
};

    typedef struct Aluno Aluno;
    void lerDadosAlunos(struct Aluno Aluno[3]);//prototipo da função
    void impriDadosAluno(struct Aluno Aluno[3]);//prototipo da função
    
	int main(){
    Aluno dados[3];

    lerDadosAlunos(dados);
    system("cls");
    impriDadosAluno(dados);

}

void lerDadosAlunos(struct Aluno Aluno[3]){
	int i, j;

    for(i = 0; i <3; i++){
    	printf("==========================\n");
    	printf("Digite o nome do aluno: ");
    	scanf("%50[^\n]s", Aluno[i].nome);
    	fflush(stdin);

   	printf("Digite a idade do aluno: ");
   	scanf("%d", &Aluno[i].idade);
    	fflush(stdin);
	    
	printf("Digite as 3 notas do aluno:\n");
	for (j = 0; j < 3; j++) {
	printf("Nota %d: ", j + 1);
	scanf("%lf", &Aluno[i].notas[j]);
    	fflush(stdin);
    	}
    }
}

void impriDadosAluno(struct Aluno Aluno[3]){
	int i;
	
    for(i = 0; i<3; i++){
    	printf("==========================\n");
    	printf("\nInformacoes do Aluno:\n");
	printf("Nome: %s\n", Aluno[i].nome);
	printf("Idade: %d\n", Aluno[i].idade);
	
	int j;
  for (j = 0; j < 3; j++){
       printf("Notas %d: %.2lf\n", j + 1, Aluno[i].notas[j]);
        }
        double soma = 0.0;
        
        for (j = 0; j < 5; j++){
            soma+= Aluno[i].notas[j];
        }
        
        double media;
	media = soma / 3;
        printf("Media: %.2lf\n", media);
        
        if (media >= 7){
            printf("Aluno Aprovado\n");
        }
        else if ( media >=4 && media < 7){
            printf("Aluno de recuperacao\n");
        }
        else{
            printf("Aluno Reprovado\n");
        }  
    }
        printf("=======================================\n");
}
