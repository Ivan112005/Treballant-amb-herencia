#include "EnemigosBase.h"
#include "EnemigoFinal.h"
#include <iostream>
#include <cstdlib>
#include <ctime>



Personaje::Personaje(std::string nombre, int vida, int ataque, int posicionX, int posicionY)
    : nombre(nombre), vida(vida), ataque(ataque), posicionX(posicionX), posicionY(posicionY) {}

std::string Personaje::getNombre() { return nombre; }
void Personaje::setNombre(std::string nombre) { this->nombre = nombre; }
int Personaje::getVida() { return vida; }
void Personaje::setVida(int vida) { this->vida = vida; }
int Personaje::getAtaque() { return ataque; }
void Personaje::setAtaque(int ataque) { this->ataque = ataque; }
int Personaje::getPosicionX() { return posicionX; }
void Personaje::setPosicionX(int x) { this->posicionX = x; }
int Personaje::getPosicionY() { return posicionY; }
void Personaje::setPosicionY(int y) { this->posicionY = y; }




void Personaje::mover(int x, int y) {
    posicionX = x;
    posicionY = y;
}
bool Personaje::estaVivo() { return vida > 0; }

