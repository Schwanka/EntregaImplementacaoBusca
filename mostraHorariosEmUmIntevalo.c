void mostraHorariosEmUmIntevalo(horario horarioDosOnibus,int horaMin,int minutoMin,int segundoMin,int horaMax,int minutoMax,int segundoMax){
    int i,j,k,aux;
    for(i = horaMin; i <= horaMax ;i++){
        for(j = 0 ; j < 60; j++){
            for(k = 0; k < 60; k++){
                if(horarioDosOnibus.tempo[i][j][k] != -1){
                    if((i == horaMax) && (j>=minutoMax) && (k >=segundoMax)){
                        return;
                    }else{
                        printf("\n %i:%i:%i com destino à %s",i,j,k,destinos[horarioDosOnibus.tempo[i][j][k]]);
                    }
                }
            }
        }
    }
}

