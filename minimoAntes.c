int minimoAntes(horario horarioDosOnibus,int hora,int minuto,int segundo,int *horaAntes,int *minutoAntes,int *segundoAntes){
    int i,j,k;
    for(i = hora; i > 0;i--){
        for(j = minuto ; j > 0; j--){
            for(k = segundo; k > 0; k--){
                if(horarioDosOnibus.tempo[i][j][k] != -1){
                    *horaAntes = i;
                    *minutoAntes = j;
                    *segundoAntes = k;
                    return 1;
                }
            }
        }
    }
    return 0;
}
