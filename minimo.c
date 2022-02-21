int minimo(horario *horarioDosOnibus, int *hora, int *minuto, int *segundo){
    int i,j,k;
    for(i = 0; i < 24;i++){
        for(j = 0 ; j < 60; j++){
            for(k = 0; k < 60; k++){
                if(horarioDosOnibus->tempo[i][j][k] != -1){
                    *hora = i;
                    *minuto = j;
                    *segundo = k;
                    return 1;
                }
            }
        }
    }
    return -1;
}
