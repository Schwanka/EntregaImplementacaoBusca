void deleta(horario *horarioDosOnibus,int hora,int minuto,int segundo){
    horarioDosOnibus->tempo[hora][minuto][segundo] = -1;
    return;
}
