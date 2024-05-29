#pragma once

#include <iostream>
#include <string>

class Personaje {
private:
    std::string nombre;
    int vida;
    int ataque;
    int posicionX;
    int posicionY;

public:
    // Constructor
    Personaje(std::string nombre, int vida, int ataque, int posicionX, int posicionY);

    // Getters
    std::string getNombre();
    int getVida();
    int getAtaque();
    int getPosicionX();
    int getPosicionY();

    // Setters
    void setNombre(std::string nombre);
    void setVida(int vida);
    void setAtaque(int ataque);
    void setPosicionX(int x);
    void setPosicionY(int y);



    void mover(int x, int y);
    bool estaVivo();
};
