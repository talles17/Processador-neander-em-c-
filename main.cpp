#include <iostream>	
using std::cout ;
using std::cin ;
using std::endl ;


#include "bib.h"

int main () {

int memoria[256] ; // memoria de instruçao e dados
int endereco[128] ; //endereço dos dados
int comando{0} ;
int tam_instrucao{0} ;
int tam_dados{0} ;
int acumulador{0} ;
int reg_instrucao{0} ;
int pc{0} ; 
bool N{false} ;
bool Z{false} ;

cout << "Processador Neander." << endl ;

	
 	inserindo(memoria, endereco , tam_instrucao, tam_dados) ;
	
 	cout << "End 	Dado 	Mnemonico" << endl ;
	for (int ii{0} ; ii < tam_instrucao ; ii++) {
		cout << ii+1 << "	" << memoria[ii] << " " << endereco[ii]  << endl ;
	}


	cout << "End 	Dado" << endl ;
	for (int ii{0} ; ii < tam_dados ; ii++) {
		cout << ii+127 << "	" << memoria[ii+127] << endl ;
	}

	for (int ii{0} ; ii < tam_instrucao ; ii++) {
		switch(memoria[ii]) {
			case 0 :

			case 1 :
				//STA() ;

			case 2 :
				LDA(acumulador , ii+128 , memoria) ;
				cout << acumulador << endl ;
			case 3 :
				ADD(acumulador, ii+129 , memoria) ;
				cout << acumulador << endl ;
			case 4 :
				//OK() ;
			case 5 :
				//AND() ;
			case 6 :
				//NOT() ;
			case 8 :
				//JMP() ;
			case 9 : 
				//JN() ;
			case 10 :
				//JZ() ;
			case 11 :
				//JNZ() ;
			case 15 :
				break ;
			default :
				cout << "Comando invalido\n" ;
		}
	}





return EXIT_SUCCESS ;

}

