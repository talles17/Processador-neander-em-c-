#ifndef BIB_H
#define BIB_H



void inserindo (int *memoria , int *endereco, int &tam, int &tam2)  ;

void STA (int acumulador , int pos_dados , int *dados) ; 

void LDA (int &acumulador , int pos_dados , int *dados) ;

void ADD (int &acumulador, int pos_dados , int*dados) ;

bool OR (int &acumulador, int pos , int&dados) ; 

bool AND (int &acumulador, int pos , int&dados) ;

void JMP (int &pos_programa , int pos) ; 

void JN (int &pos_programa , int pos , int &acumulador) ;

void JZ (int &pos_programa , int pos , int &acumulador) ;

void JNZ (int &pos_programa , int pos, int &acumulador) ;

	
#endif /* BIB_H */