int getDestino(horario horarioDosOnibus,int destinoEscolhido){
    int i,j,k;
    for(i = 0; i < 24; i++){
        for(j = 0; j < 60; j++){
            for(k = 0; k <60; k ++){
                if(horarioDosOnibus.tempo[i][j][k] == destinoEscolhido){
                    printf("\nO primeiro ônibus a sair para %s sai às %i:%i:%i",destinos[destinoEscolhido],i,j,k);
                    return 1;
                }
            }
        }
    }
    return -1;
}
