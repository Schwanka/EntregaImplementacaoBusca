#include "implementação_busca.h"

/*
Nome: Gustavo Schwanka
GRR20193748

Essa implementação usa duas estruturas diferentes. A estrutura horario que possui um vetor tridimencional (horario[24][60][60]) e um vetor constante
com todos os destinos disponíveis.

*/
int main () {
    horario horarioDosOnibus;
    int escolha;
    if(iniciaTempo(&horarioDosOnibus)) {
        printf("Horários alocados com sucesso.");
    }else {
        printf("Erro ao alocar o espaço para os horários");
        return(0);
    }
    do{
        menu();
        scanf("%i",&escolha);
        escolhaInserida(escolha,&horarioDosOnibus);
    }while(escolha != 10);

    return (0);
}
