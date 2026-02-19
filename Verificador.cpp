#include "generador.h"
#include <cstdlib>

void verificador(int original[6], int intento[6], int &lepego, int &casi){

	lepego = 0;
	casi = 0;

	for(int i = 0; i < 6; i++){
		if(original[i] == intento[i]){
			lepego++;
		} else {
			for(int j = 0; j < 6; j++){
				if(intento[i] == original[j] && original[j] != intento[j]){
					casi++;
					break;
				}
			}
		}
			
	}
}