#include "generador.h"
#include <cstdlib>

void generaCodigos (int code[6]){
	for(int i = 0; i < 6; i++) {
		int num;
		bool toma;

		do {
			toma = false;
			num = rand() %10;

			if((i==0 || i==5)&& num==0){
				toma = true;
			}
			for (int j = 0;j < i; j++){
				if(code[j]==num){
					toma = true;
				}
			}
		} while (toma);

		code[i] = num;
	}

}