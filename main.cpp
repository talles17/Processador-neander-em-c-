#include <iostream>	
using std::cout ;
using std::cin ;
using std::endl ;


#include "bib.h"

int main () {

	int *memoria = new int[256] ; // memoria de instruçao e dados
	int *endereco = new int[128] ; //endereço dos dados
	int comando{0} ;
	int tam_instrucao{0} ;
	int tam_dados{0} ;
	int acumulador{0} ;
	int reg_instrucao{0} ;
	int pc{0} ; 
	bool N{false} ;
	bool Z{true} ;

	cout << "Processador Neander.\n\n" << endl ;

	
 	
 	altera_acumulador (acumulador, N , Z) ;
 	inserindo(memoria, endereco , tam_instrucao, tam_dados) ;
	

	mostrar_mem_instrucao(memoria, endereco, tam_instrucao) ;
	mostrar_mem_dado(memoria, tam_dados) ;


	
	
	int ii{0} ;
	//cout << "tam_instrucao: " << tam_instrucao << endl; ;
	while (ii < tam_instrucao) {
		switch(memoria[ii]) {

			case 1 :
				STA(acumulador, endereco[ii] ,memoria) ;
				pc = ii+1 ;
				ii++ ;
				//cout << "ii : " << ii << endl ;
				mostrar_info (acumulador,pc , N , Z) ;
				break ;
			case 2 :
				LDA(acumulador , ii+128 , memoria, N , Z) ;
				pc = ii+1 ;
				ii++ ;
				//cout << "ii : " << ii << endl ;
				mostrar_info (acumulador,pc , N , Z) ;
				break ;
			case 3 :
				ADD(acumulador, ii+128 , memoria, N , Z) ;
				pc = ii+1 ;
				ii++ ;
				//cout << "ii : " << ii << endl ;
				mostrar_info (acumulador,pc , N , Z) ;
				break ;
			case 4 :
				//OR() ;
			case 5 :
				AND(acumulador, ii+128, memoria, N , Z) ;
				pc = ii+1 ;
				ii++ ;
				mostrar_info (acumulador,pc , N , Z) ;
				break ;
			case 6 :
				NOT(acumulador, memoria) ;
				pc = ii+1 ;
				ii++ ;
				mostrar_info (acumulador,pc , N , Z) ;
				break ;
			case 8 :
				JMP(ii , endereco[ii]) ;
				pc = ii ;
				mostrar_info (acumulador,pc , N , Z) ;
				break ;
			case 9 : 
				JN(ii , endereco[ii], acumulador) ;
				pc = ii ;
				mostrar_info (acumulador,pc , N , Z) ;
				break ;
			case 10 :
				JZ(ii , endereco[ii], acumulador) ;
				pc = ii ;
				mostrar_info (acumulador,pc , N , Z) ;
				break ;
			case 11 :
				JNZ(ii , endereco[ii], acumulador) ;
				pc = ii ;
				mostrar_info (acumulador,pc , N , Z) ;
				break ;
			case 15 :
				pc = ii+1 ;
				ii++ ;
				mostrar_info (acumulador,pc , N , Z) ;
				break ;
			default :
				cout << "Comando invalido\n" ;
				break ;
		}
	}

	mostrar_mem_dado(memoria, tam_dados) ;


	delete [] memoria ;
	delete [] endereco ;

return EXIT_SUCCESS ;

}

