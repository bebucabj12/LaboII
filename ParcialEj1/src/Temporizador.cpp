#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include <cstdio>
using namespace std;
#include "Temporizador.h"

Temporizador::Temporizador(int h, int m, int s){
    if(h < 0){
       horas = 0;
    } else {
        horas = h;
    }
    if(m < 0 || m > 59){
        minutos = 0;
    } else {
        minutos = m;
    }
    if(s < 0 || s > 59){
        segundos = 0;
    } else {
        segundos = s;
    }
}

void Temporizador::tic(){
    segundos = segundos + 1;
}

void Temporizador::mostrar(){
    cout << horas << " : " << minutos << " : " << segundos << endl;
}

int Temporizador::getHoras(){
    return horas;
}

int Temporizador::getMinutos(){
    return minutos;
}

int Temporizador::getSegundos(){
    return segundos;
}

int Temporizador::comparar(Temporizador obj2){
    if(horas == obj2.getHoras() && minutos == obj2.getMinutos() && segundos == obj2.getSegundos()){
        return 0;
    } else if (horas > obj2.getHoras() && minutos > obj2.getMinutos() && segundos > obj2.getSegundos()){
        return +1;
    } else if(horas < obj2.getHoras() && minutos < obj2.getMinutos() && segundos < obj2.getSegundos()){
        return -1;
    }

}

void Temporizador::tac(){
    segundos = segundos + 1;
}
