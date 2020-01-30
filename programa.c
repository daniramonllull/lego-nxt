void mover_tiempo (int tiempo, int velocidad, char sentido);
void darvueltas(int tiempo, int velocidad, char sentido);


task main(){

    //mover_tiempo(1000,75,'D');
    //mover_tiempo(1000,75,'A');
    darvueltas(2000,75,'H');

}

// Sentido será D para delante, A para atrás
void mover_tiempo (int tiempo, int velocidad, char sentido){

    if(sentido == 'D'){
        OnFwd(OUT_BC,velocidad);
    }
    else {
        OnRev(OUT_BC,velocidad);
    }
    Wait(tiempo);

}

void darvueltas(int tiempo, int velocidad, char sentido) {

    OnFwd(OUT_C,velocidad);
    OnRev(OUT_B,velocidad);
    Wait(tiempo);

}
