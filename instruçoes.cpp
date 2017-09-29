
#include<iostream>
using std::cin ;
using std::cout ;
using std::endl ;


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
			int pos ;
			cout << "Digite a posiçao de endereço(128-256) e o dado : " ;
			cin >> pos ;
			cin >> memoria[pos-1]  ;
			i++ ;
		}

	} while (comando != 1) ; 
	tam2 = i ;

}

void altera_acumulador (int &acumulador, bool &n, bool &z) {
	int comando ;
	cout << "Deseja alterar o acumulador ? (1)sim (0)nao : " ;
	cin >> comando ;
	if (comando == 1) {
		cout << "Digite o novo valor do acumulador : " ;
		cin >> acumulador ;
		if (acumulador == 0) {
			z = true ;
		}
		else if (acumulador < 0 ) {
			n = true ;
		}
		else {
			z = false ;
			n = false ;
		}
	}
}

void mostrar_info (int acumulador, int pc , bool n, bool z) {
	cout << "Acumulador: " << acumulador << "	PC: " << pc << "	N = " << n << "		Z = " << z << endl ;
}

void mostrar_mem_instrucao (int *memoria, int *endereco, int tam_instrucao) {
	cout << "End 	Dado 	Mnemonico" << endl ;
	for (int ii{0} ; ii < tam_instrucao ; ii++) {
		cout << ii+1 << "	" << memoria[ii] << " " << endereco[ii]  << endl ;
	}
}

void mostrar_mem_dado (int *memoria, int tam_dados) {
	cout << "End 	Dado" << endl ;
	for (int ii{0} ; ii < tam_dados ; ii++) {
		cout << ii+128 << "	" << memoria[ii+127] << endl ;
	}
}

void STA (int acumulador , int pos_memoria , int *memoria ) {
	memoria[pos_memoria-1] = acumulador ;
} 

void LDA (int &acumulador , int pos_memoria , int *memoria , bool &n , bool &z) {
	acumulador = memoria[pos_memoria-1] ;
	if (acumulador == 0) {
		z = true ;
	}
	else if (acumulador < 0 ) {
		n = true ;
	}
	else {
		z = false ;
		n = false ;
	}
}

void ADD (int &acumulador, int pos_memoria , int*memoria, bool &n , bool &z) {
	acumulador += memoria[pos_memoria-1] ;	
	if (acumulador == 0) {
		z = true ;
	}
	else if (acumulador < 0 ) {
		n = true ;
	}
	else {
		z = false ;
		n = false ;
	}
}

void OR (int &acumulador, int pos , int*memoria) {
	//if ()	
}

void AND (int &acumulador, int pos , int*memoria,bool &n , bool &z) {
	if (acumulador and memoria[pos-1]) {
		acumulador = 1 ;
		n = false ;
		z = false ;
	}
	else {
		acumulador = 0 ;
		n = false ;
		z = true ;
	}
}

void NOT (int &acumulador , int *memoria) {
	int tam= 0 , extra = acumulador  ;

	while (extra / 2 == 0 ) {
		extra = extra / 2 ;
		tam++ ;
	}
	tam++ ;
	extra = acumulador ;
	int *v1 = new int[tam] , *v2 = new int[tam] ;
	for (int ii{0} ; ii < tam ; ii++) {
		v1[ii] = extra % 2 ;
	}
	for (int ii{0} ; ii < tam ; ii++) {
		v2[tam-ii] = v1[ii] ;		
	}
	for (int ii{0} ; ii < tam ; ii++) {
		cout << v2[tam] ;		
	}

	delete[] v1 ;
	delete[] v2 ;
}

void JMP (int &pos_programa , int pos) {
	pos_programa = pos ;
}

void JN (int &pos_programa , int pos , int acumulador) {
	if (acumulador < 0 ) {
		pos_programa = pos ;
	}
}

void JZ (int &pos_programa , int pos , int acumulador) {
	if (acumulador == 0 ) {
		pos_programa = pos ;
	}
}

void JNZ (int &pos_programa , int pos, int acumulador) {
	if (acumulador != 0) {
		pos_programa = pos ;
	}
}





