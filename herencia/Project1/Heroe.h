#pragma once
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "EnemigosBase.h"

using namespace std;


class Heroe : public Personaje {
private:
    std::string nombre;
    int vida;
    int ataque;
    int posicionX;
    int posicionY;

public:
    Heroe(std::string nombre, int vida, int ataque, int posicionX, int posicionY);
    
    std::string getNombre();
    int getVida();
    int getAtaque();




    void setVida(int vida);
    void setAtaque(int ataque);


    // Métodos propios
    void printAllStats();
    void batalla(Personaje& enemigo);
};
