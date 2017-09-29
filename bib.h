#ifndef BIB_H
#define BIB_H



void inserindo (int *memoria , int *endereco, int &tam, int &tam2)  ;

void altera_acumulador (int &acumulador, bool &n , bool &z) ; 

void mostrar_info (int acumulador, int pc , bool n, bool z) ;

void mostrar_mem_instrucao (int *memoria, int *endereco, int tam_memoria) ; 

void mostrar_mem_dado (int *memoria, int tam_dados) ;

void STA (int acumulador , int pos_dados , int *memoria) ;  

void LDA (int &acumulador , int pos_memoria , int *memoria, bool &n , bool &z) ;

void ADD (int &acumulador, int pos_memoria , int*memoria , bool &n , bool &z) ;

void OR (int &acumulador, int pos_memoria , int*memoria) ; 

void AND (int &acumulador, int pos_memoria , int*memoria, bool &n , bool &z) ;

void NOT (int &acumulador , int *memoria) ;

void JMP (int &pos_programa , int pos) ; 

void JN (int &pos_programa , int pos , int acumulador) ;

void JZ (int &pos_programa , int pos , int acumulador) ;

void JNZ (int &pos_programa , int pos, int acumulador) ;

	
#endif /* BIB_H */