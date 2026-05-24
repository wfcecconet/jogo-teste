#pragma once
#include "Inimigo.h"

class Jogador;

class Inim_Facil : public Inimigo
{
private:
	float raio;
public:
	Inim_Facil();
	~Inim_Facil();

	void mover();
	void danificar(Jogador* p);
	void executar();
	void salvar();



};

