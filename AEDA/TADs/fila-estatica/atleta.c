
#include <stdio.h>
#include "atleta.h"

void correr(Atleta *a1);
void descansar(Atleta *a1);
void inicializa(Atleta *a1);
void printAtleta(Atleta a1);

void correr(Atleta *a1){
    if (a1->cansaco <= 10){
        a1->cansaco += 1;
        printf("Corrida realizada!");
    }
    else{
        printf("Atleta esta exausto, descanse primeiro!");
    }
}

void descansar(Atleta *a1){
    if (a1->cansaco == 0){
        printf("Atleta esta descansado, nao e necessario descanso!");
    }
    else{
        a1->cansaco -= 1;
        printf("Descanso realizado!");
    }
}

void inicializa(Atleta *a1){
    a1->cansaco = 0;
    a1->idade = 0.0;
    a1->altura = 0.0;
    a1->cpf = 0;
}

void printAtleta(Atleta a1){
    // int idade;
    // float peso;
    // float altura;
    // char nome[50];
    // int cpf;
    // int cansaco;
    printf("Idade: %d", a1.idade);
}
