#include <stdio.h>
#include <stdlib.h>
#include "Forma.cpp"

class Estado :public Forma{
    private:
	int final;
      //Transicao* transicoes[];
    public:
	//construtor
	int processa(char* palavra){	}
	void desenha(){}
};
