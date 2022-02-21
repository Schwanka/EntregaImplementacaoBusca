int maximo(horario *horarioDosOnibus, int *hora, int *minuto, int *segundo){
    int i,j,k;
    for(i = 23; i > 0;i--){
        for(j = 59 ; j > 0; j--){
            for(k = 59; k > 0; k--){
                if(horarioDosOnibus->tempo[i][j][k] != -1){
                    *hora = i;
                    *minuto = j;
                    *segundo = k;
                    return 1;
                }
            }
        }
    }
    return 0;
}
