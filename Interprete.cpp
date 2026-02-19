#include "generador.h"
#include <cstdlib>

void interprete (int intento[6], int resp){
	
	for(int i = 5; i >= 0; i--){
		intento[i] = resp%10;
		resp = resp/10;
	}
}