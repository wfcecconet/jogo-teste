#pragma once
#include "Inimigo.h"

class Chefao : public Inimigo
{
private:
	short int forca;

public:
	Chefao();

	~Chefao();

	void executar(); //herdada de Inimigo->Personagem->Entidade->Ente

	void salvar(); //herdada de Inimigo->Personagem->Entidade 

	void mover(); //herdada de Inimigo->Personagem

	void danificar(Jogador* p); //herdada de Inimigo


};

