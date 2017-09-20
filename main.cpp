#include <iostream>
using std::cout ;
using std::cin ;
using std::endl ;


#include "bib.h"

int main () {

cout << "Processador Neander." << endl ;

while (intrucao != 240) {
	cout << "(0) para escrever na memoria de dados\n(1) para escrever na memoria de intrucao" << endl ;
	if (intrucao == 0) {
		cout << "End 	Dado 	Mnemonico" << endl ;
		for (int ii{0} ; ii < 127 ; ii++) {
			cout << ii+1 << "	" << memora[ii] << endl ;
		}
	}
	else if (intrucao == 1) {
		cout << "End 	Dado" << endl ;
		for (int ii{127} ; ii < 257 ; ii++) {
			cout << ii+1 << "	" << memora[ii] << endl ;
		}
	}
	else {
		cout << "Numero incorreto!!" << endl ;
	}

}



return EXIT_SUCCESS ;

}

