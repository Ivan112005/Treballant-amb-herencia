#pragma once
#include <iostream>
#include <string>
#include "EnemigosBase.h"

class EnemigoFinal : public Personaje {
private:
    int Ataque1;
    int Ataque2;

public:
    // Constructor
    EnemigoFinal(std::string nombre, int vida, int ataque, int posicionX, int posicionY, int Ataque1, int Ataque2);

    // Getters
    int getAtaque1();
    int getAtaque2();

    // Setters
    void setAtaque1(int ataque);
    void setAtaque2(int ataque);


    //METODOS PROPIOS
    void printAllStats();


};
