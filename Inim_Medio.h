#pragma once
#include "Inimigo.h"

class Inim_Medio : public Inimigo
{
private:
	int tamanho;

public:

	Inim_Medio();
	~Inim_Medio();


	void executar(); //herdada de Inimigo->Personagem->Entidade->Ente

	void salvar(); //herdada de Inimigo->Personagem->Entidade 
	
	void mover(); //herdada de Inimigo->Personagem

	void danificar(Jogador* p); //herdada de Inimigo


};

