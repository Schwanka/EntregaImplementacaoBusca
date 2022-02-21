/* Essa função inicia o vetor do tipo horário com todos os campos com -1
        Obs. Os valores correspondentes ( de 0-47) correspondem ao destino do vetor
        do arquivo "estruturas.c" que esse sim possui o nome dos destinos. Uma forma
        de não guardar a mesma string inumeras vezes =)
*/

int iniciaTempo(horario *horarioASerGerado){
    int i,j,k;
    for(i = 0; i < 24; i++){
        for(j = 0; j < 60; j ++) {
            for(k = 0; k < 60 ; k ++){
                horarioASerGerado->tempo[i][j][k] = -1;
                //printf("\n horário %i:%i:%i gerado com %i",i,j,k,horarioASerGerado->tempo[i][j][k]);
            }
        }
    }
    return 1;
}
