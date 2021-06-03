#ifndef TEMPORIZADOR_H
#define TEMPORIZADOR_H


class Temporizador {
    private:
        int horas;
        int minutos;
        int segundos;
    public:
        Temporizador(int, int, int);
        void tic();
        void mostrar();
        int comparar(Temporizador);
        int getHoras();
        int getMinutos();
        int getSegundos();
        void tac();
};

#endif // TEMPORIZADOR_H
