int minimoDepois(horario horarioDosOnibus,int hora,int minuto,int segundo,int *horaDepois,int *minutoDepois,int *segundoDepois){
    int i,j,k;
    for(i = hora; i < 24 ;i++){
        for(j = minuto ; j < 60; j++){
            for(k = segundo; k < 60; k++){
                if(horarioDosOnibus.tempo[i][j][k] != -1){
                    *horaDepois = i;
                    *minutoDepois = j;
                    *segundoDepois = k;
                    return 1;
                }
            }
        }
    }
    return 0;
}

