void mover_tiempo (int tiempo, int velocidad, char sentido)


task main(){

    mover_tiempo(1000,75,'D');
    mover_tiempo(1000,75,'A');

}

// Sentido será D para delante, A para atrás
void mover_tiempo (int tiempo, int velocidad, char sentido){

    if(sentido == 'D'){
        OnFwd(OUT_BC,velocidad);
    }
    else {
        OnRev(OUT_BC,velocidad);
    }
    wait(tiempo);

}