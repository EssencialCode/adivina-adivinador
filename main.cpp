#include <iostream>
#include <ctime>
#include "generador.h"
using namespace std;

int main (){
	srand(time(0));
	int codigo[6], intentousuario[6];
	int pegue = 0, porpoco = 0;
	int respuesta;
	bool referi;

	generaCodigos(codigo);

	cout << "¡Bienvenido a Adivina adiviniador!" << endl;
	cout << "Intenta adivinar el código secreto de 6 digitos" << endl;
	cout << "REGLA:" << endl;
	cout << "Código de 6 digitos sin ceros ni al inicio, ni al final. NO números repetidos." << endl;
	
	do {
		do {
			referi = true;
			cout << "Ingresa tu primer intento: " << endl;
			cin >> respuesta;
			if(respuesta >= 111111 && respuesta <= 999999){
				if(!(respuesta % 10 == 0)){
					interprete(intentousuario, respuesta);
					referi = false;
				} else {
					cout << "ERROR: El número no puede terminar en 0." <<endl;
				}
			} else {
				cout << "ERROR: El número no cumple la regla." << endl;
			}
		} while (referi);
		
		verificador(codigo, intentousuario, pegue, porpoco);

		cout << "Posiciones correctas: " << pegue << endl;
		cout << "Números correctos: " << porpoco << endl;
	
	} while (pegue < 6);

	cout << "¡FELICITACIONES!" << endl;
	cout << " Haz descifrado el código secreto." << endl;

	return 0;
}