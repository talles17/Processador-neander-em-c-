



void STA (int acumulador , int pos_dados , int &dados) {
	dados[pos_dados-1] = acumulador ;
} 

void LDA (int &acumulador , int pos_dados , int &dados) {
	acumulador = dados[pos_dados-1] ;
}

void ADD (int &acumulador, int pos_dados , int&dados) {
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





