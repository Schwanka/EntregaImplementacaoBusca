void escolhaInserida(int escolha, horario *horarioDosOnibus){
    switch(escolha)
{
        case  1:
            printf("\n"); // por algum motivo da erro se eu declarar as variáveis depois do "case 1: " com esse print acaba o problema
            int hora,minuto,segundo,i;
            hora =0;
            minuto = hora;
            segundo = minuto;
            printf("\n Inserir novo horário de ônibus");
            printf("\n Digite a hora:\n");
            scanf("%i",&hora);
            printf("\n Digite os minutos:\n");
            scanf("%i",&minuto);
            printf("\n Digite os segundos:\n");
            scanf("%i",&segundo);
            printf("\nEscolha um dos possíveis destinos:\n");
            for(i = 0; i < 50; i++) { // Por algum motivo não consegui deixar bem identado com os "/t"
                if(i % 5 == 0) printf("\n");
                printf("%i-%s\t\t\t",i,destinos[i]);
            }
            printf("\n");
            scanf("%i",&horarioDosOnibus->tempo[hora][minuto][segundo]);
            printf("\n Horário Inserido: %i:%i:%i destino: %s",hora,minuto,segundo,destinos[horarioDosOnibus->tempo[hora][minuto][segundo]]);
        break;
        case  2:
            printf("\n Mostrar a primeira saída do dia");
            if(minimo(horarioDosOnibus,&hora,&minuto,&segundo)){
                printf("\n A primeira saída está marcada para %i:%i:%i com o destino a %s",hora,minuto,segundo,destinos[horarioDosOnibus->tempo[hora][minuto][segundo]]);
            }else {
                printf("\nNenhum horário inserido.");
            }
        break;
        case  3:
            printf("\n Mostrar a ultima saída do dia");
            if(maximo(horarioDosOnibus,&hora,&minuto,&segundo)){
                printf("\n A ultima saída está marcada para %i:%i:%i com o destino a %s",hora,minuto,segundo,destinos[horarioDosOnibus->tempo[hora][minuto][segundo]]);
            }else {
                printf("\nNenhum horário inserido.");
            }
        break;
        case  4:
            printf("\n Mostrar o ônibus que sai em em determinado horário");
            printf("\n Digite a hora:\n");
            scanf("%i",&hora);
            printf("\n Digite os minutos:\n");
            scanf("%i",&minuto);
            printf("\n Digite os segundos:\n");
            scanf("%i",&segundo);
            if(get(*horarioDosOnibus,hora,minuto,segundo) != -1){
                printf("\n O ônibus que sai às %i:%i:%i tem destino à %s",hora,minuto,segundo,destinos[horarioDosOnibus->tempo[hora][minuto][segundo]]);
            }else {
                printf("\n O horário %i:%i:%i não tem nenhum destino cadastrado",hora,minuto,segundo);
            }
        break;
        case  5:
            printf("\n Mostrar o primeiro ônibus que sai antes de um determinado horário");
            int horaAntes,minutoAntes,segundoAntes,auxhora,auxminuto,auxsegundo;
            auxhora = 0;
            auxminuto = 0;
            auxsegundo = 0;
            printf("\n Digite a hora:\n");
            scanf("%i",&hora);
            printf("\n Digite os minutos:\n");
            scanf("%i",&minuto);
            printf("\n Digite os segundos:\n");
            scanf("%i",&segundo);
            if(segundo > 0){ // setando os dados para não pegar o valor inserido caso exista.
                segundo --;
                auxsegundo = 1;
            }else {
                if(minuto > 0) {
                    minuto --;
                    segundo = 59;
                    auxminuto = 1;
                }else{
                    if(hora > 0){
                        hora --;
                        minuto =59;
                        segundo = 59;
                        auxhora = 1;
                    }else {
                        printf("Não existe horario antes do horario informado.");
                        break;
                    }
                }
            }
            if(minimoAntes(*horarioDosOnibus,hora,minuto,segundo,&horaAntes,&minutoAntes,&segundoAntes)){
                printf("A primeira saida marcada antes de %i:%i:%i é a saida %i:%i:%i com o destino a %s",
                (hora + auxhora),(minuto + auxminuto),(segundo+ auxsegundo),horaAntes,minutoAntes,segundoAntes,destinos[horarioDosOnibus->tempo[horaAntes][minutoAntes][segundoAntes]]);
            }else {
                printf("\nNenhum horário inserido.");
            }
        break;
        case  6:
            printf("\n Mostrar as saídas previstas em um período de tempo");
            int horaMax,minutoMax,segundoMax,horaMin,minutoMin,segundoMin;
            printf("\n Digite o horário mínimo");
            printf("\n Digite a hora:\n");
            scanf("%i",&horaMin);
            printf("\n Digite os minutos:\n");
            scanf("%i",&minutoMin);
            printf("\n Digite os segundos:\n");
            scanf("%i",&segundoMin);
            printf("\n Digite o horário maximo");
            printf("\n Digite a hora:\n");
            scanf("%i",&horaMax);
            printf("\n Digite os minutos:\n");
            scanf("%i",&minutoMax);
            printf("\n Digite os segundos:\n");
            scanf("%i",&segundoMax);
            printf("\n Horários dentro do intervalo:  %i:%i:%i e %i:%i:%i\n",horaMin,minutoMin,segundoMin,horaMax,minutoMax,segundoMax);
            mostraHorariosEmUmIntevalo(*horarioDosOnibus,horaMin,minutoMin,segundoMin,horaMax,minutoMax,segundoMax);
        break;
        case  7:
            printf("\n Mostrar o primeiro ônibus que sai depois de um determinado horário");
            int horaDepois,minutoDepois,segundoDepois;
            printf("\n Digite a hora:\n");
            scanf("%i",&hora);
            printf("\n Digite os minutos:\n");
            scanf("%i",&minuto);
            printf("\n Digite os segundos:\n");
            scanf("%i",&segundo);
            if(minimoDepois(*horarioDosOnibus,hora,minuto,segundo,&horaDepois,&minutoDepois,&segundoDepois)){
                printf("A primeira saida marcada depois de %i:%i:%i é a saida %i:%i:%i com o destino a %s",
                hora,minuto,segundo,horaDepois,minutoDepois,segundoDepois,destinos[horarioDosOnibus->tempo[horaDepois][minutoDepois][segundoDepois]]);
            }else {
                printf("\nNenhum horário inserido.");
            }
        break;
        case  8:
            printf("\n Mostrar o primeiro horário que sai para um determinado destino");
            int destinoAchar;
            printf("\nEscolha um dos possíveis destinos:\n");
            for(i = 0; i < 50; i++) { // Por algum motivo não consegui deixar bem identado com os "/t"
                if(i % 5 == 0) printf("\n");
                printf("%i-%s\t\t\t",i,destinos[i]);
            }
            printf("\n");
            scanf("%i",&destinoAchar);
            if(getDestino(*horarioDosOnibus,destinoAchar) == -1){
                printf("\n Nenhum ônibus vai para %s",destinos[destinoAchar]);
            }
        break;
        case  9:
            printf("\n Deletar um itinerário se ele existir");
            printf("\n Inserir novo horário de ônibus");
            printf("\n Digite a hora:\n");
            scanf("%i",&hora);
            printf("\n Digite os minutos:\n");
            scanf("%i",&minuto);
            printf("\n Digite os segundos:\n");
            scanf("%i",&segundo);
            deleta(horarioDosOnibus,hora,minuto,segundo);
            printf("\n Horario limpo");
        break;
        case  10:
            printf("\n Programa Fechado\n");
            exit(0);
        break;
    }
}
