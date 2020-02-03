void mover_tiempo (int tiempo, int velocidad, char sentido);
void darvueltas(int tiempo, int velocidad, char sentido);
/*
 Salida C: Rueda izquierda
 Salida B: Rueda derecha
*/
task main(){

    //mover_tiempo(1000,75,'D');
    //mover_tiempo(1000,75,'A');

    int velocidad = 5;
    do{
        darvueltas(500,velocidad,'H');
        //darvueltas(1000,75,'A');
        velocidad = velocidad + 5;        
    } while (velocidad <= 100);
   

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
    
    if(sentido == 'H'){
        //sentido horario (H)
        OnFwd(OUT_C,velocidad);
        OnRev(OUT_B,velocidad);
        Wait(tiempo);
    }
    else {
        //sentido antihorario(A)
        OnFwd(OUT_B,velocidad);
        OnRev(OUT_C,velocidad);
        Wait(tiempo);
    }


}
