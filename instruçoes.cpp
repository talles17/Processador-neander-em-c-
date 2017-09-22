
#include<iostream>
using std::cin ;
using std::cout ;

void inserindo (int *memoria , int *endereco, int &tam, int &tam2) {
	int i{0} , comando ;
	
	do { 
		cout << "(0) instruçao\n(1) sair\n" ;
		cin >> comando ;
		if (comando == 0) {
			cout << "Digite a instruçao : " ;
			cin >> memoria[i] ;
			cin >> endereco[i]  ;
			i++ ;
		}

	} while (comando != 1) ; 
	tam = i ;

	i = 0 ;
	do { 
		cout << "(0) Dado\n(1) sair\n" ;
		cin >> comando ;
		if (comando == 0) {
			cout << "Digite o dado : " ;
			cin >> memoria[i+127]  ;
			i++ ;
		}

	} while (comando != 1) ; 
	tam2 = i ;

}


void STA (int acumulador , int pos_dados , int *dados) {
	dados[pos_dados-1] = acumulador ;
} 

void LDA (int &acumulador , int pos_dados , int *memoria) {
	acumulador = memoria[pos_dados-1] ;
}

void ADD (int &acumulador, int pos_dados , int*dados) {
	acumulador += dados[pos_dados-1] ;	
}

bool OR (int &acumulador, int pos , int&dados) {
	
}

bool AND (int &acumulador, int pos , int&dados) {
	
}

void JMP (int &pos_programa , int pos) {
	pos_programa = pos ;
}

void JN (int &pos_programa , int pos , int &acumulador) {
	if (acumulador < 0 ) {
		pos_programa = pos ;
	}
}

void JZ (int &pos_programa , int pos , int &acumulador) {
	if (acumulador == 0 ) {
		pos_programa = pos ;
	}
}

void JNZ (int &pos_programa , int pos, int &acumulador) {
	if (acumulador != 0) {
		pos_programa = pos ;
	}
}





