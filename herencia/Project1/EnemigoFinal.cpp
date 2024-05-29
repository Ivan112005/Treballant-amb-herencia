#include "EnemigosBase.h"
#include "EnemigoFinal.h"
#include <iostream>
#include <cstdlib>
#include <ctime>


//CONSTRUCTOR


EnemigoFinal::EnemigoFinal(std::string nombre, int vida, int ataque, int posicionX, int posicionY, int superAtaque1, int superAtaque2)
    : Personaje(nombre, vida, ataque, posicionX, posicionY), Ataque1(superAtaque1), Ataque2(superAtaque2) {}

//GETTERS AND SETTERS

int EnemigoFinal::getAtaque1() { return Ataque1; }
void EnemigoFinal::setAtaque1(int ataque) { Ataque1 = ataque; }

int EnemigoFinal::getAtaque2() { return Ataque2; }
void EnemigoFinal::setAtaque2(int ataque) { Ataque2 = ataque; }

//METODOS PROPIOS
void EnemigoFinal::printAllStats() {
	std::cout << "El nombre del enemigo final es " << getNombre() << std::endl;
	std::cout << "La vida del enemigo final es " << getVida() << std::endl;
	std::cout << "El ataque normal del enemigo final es " << getAtaque() << std::endl;
	std::cout << "El ataque de fuego del enemigo final es " << getAtaque1() << std::endl;
	std::cout << "El ataque de hielo del enemigo final es " << getAtaque2() << std::endl;
}