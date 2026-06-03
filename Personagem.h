#pragma once
#include "Entidade.h"
class Personagem : public Entidade
{
protected:
	int num_vidas;

public:
	Personagem();
	~Personagem();

	int getVidas() { return num_vidas; }
	void setVidas(int v) { num_vidas = v; }



	void salvarDataBuffer();
	virtual void executar() = 0;
	virtual void salvar() = 0;
	virtual void mover() = 0;

};

