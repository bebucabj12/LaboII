#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include "Temporizador.h"
using namespace std;

int main() {
    Temporizador obj(13,12,10);
    Temporizador obj2(15,20,12);
    //cout << obj.comparar(obj2);
    obj.tac();
    obj.mostrar();


    return 0;
}
