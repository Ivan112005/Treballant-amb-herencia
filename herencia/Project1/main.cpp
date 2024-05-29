#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

#include "Heroe.h"
#include "EnemigosBase.h"
#include "EnemigoFinal.h"


using namespace std;


int selectEnemy() {
	int selection;
	cout << "Escribe a quien quieres atacar (1-LLUCNEITOR, 2-LINO): \n";
	cin >> selection;
	// Validar la entrada para asegurarse de que solo devuelve 1 o 2
	while (selection != 1 && selection != 2) {
		cout << "Error. Escribe 1 para LLUCNEITOR o 2 para LINO: \n";
		cin >> selection;
	}
	}


int main() {
	int bossHP = 50;
	int bossFinalHP = 100;
	int heroeHP = 120;
	int characterDamage = 20;
	int bossDamage = 10;


    string nombrePersonaje;
	string bossName = "Llucneitor";
	string boss2Name = "Lino";
	string boss3Name = "Javi";

    cout << "Heroe: Vida 120, Ataque 20, Posicion X 0,  Posicion Y 0\n\n";

        cout << "Enemigo1: Vida 50, Ataque 10\n";
        cout << "Enemigo2: Vida 50, Ataque 10\n";        
        cout << "Enemigo3: Vida 50, Ataque 10\n";
        cout << "EnemigoFinal: Vida 100, Ataque 25\n\n";


        cout << "Escribe el nombre de tu heroe\n";
        cin >> nombrePersonaje;


		//character attack
		if (bossHP > 0 && heroeHP > 0)
		{
			bossHP = bossHP - characterDamage;
			if (bossHP < 0)
			{
				bossHP = 0;
			}
			cout << nombrePersonaje << " ha pegado un tortazo de: " << characterDamage << " y le quedan " << bossHP << " al enemigo " << bossName << "\n";
			if (bossHP <= 0)
			{
				cout << "Has matado a " << bossName << "\n";
			}
		}

		//enemy attack
		if (bossHP > 0) {
			heroeHP = heroeHP - bossDamage;
			if (heroeHP <= 0) {
				heroeHP = 0;
				cout << bossName << " te ha pegado un tortazo de " << bossDamage << " y te quedan " << heroeHP << "\n";
				cout << " Game Over\n";
			}
			else {
				cout << bossName << " te ha pegado un tortazo de " << bossDamage << " y te quedan " << heroeHP << "\n";

			}


		}
}

