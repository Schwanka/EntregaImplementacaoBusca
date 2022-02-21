#include <stdio.h>
#include <stdlib.h>
// Cada arquivo desses possui uma funcão das citadas abaixo. 
#include "estruturas.c"
#include "iniciaTempo.c"
#include "menu.c"
#include "minimo.c"
#include "maximo.c"
#include "get.c"
#include "minimoAntes.c"
#include "minimoDepois.c"
#include "getDestino.c"
#include "deleta.c"
#include "mostraHorariosEmUmIntevalo.c"
#include "escolhaInserida.c"
// Para facilitar saber quais funções estão inseridas 
int iniciaTempo(horario *horarioASerGerado);
void deleta(horario *horarioDosOnibus,int hora,int minuto,int segundo);
void menu();
void escolhaInserida(int escolha, horario *horarioDosOnibus);
int minimo(horario *horarioDosOnibus, int *hora, int *minuto, int *segundo);
int maximo(horario *horarioDosOnibus, int *hora, int *minuto, int *segundo);
int get(horario horarioDosOnibus,int hora,int minuto,int segundo);
int getDestino(horario horarioDosOnibus,int destinoEscolhido);
int minimoAntes(horario horarioDosOnibus,int hora,int minuto,int segundo,int *horaAntes,int *minutoAntes,int *segundoAntes);
int minimoDepois(horario horarioDosOnibus,int hora,int minuto,int segundo,int *horaDepois,int *minutoDepois,int *segundoDepois);
void mostraHorariosEmUmIntevalo(horario horarioDosOnibus,int horaMin,int minutoMin,int segundoMin,int horaMax,int minutoMax,int segundoMax);
