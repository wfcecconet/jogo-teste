#pragma once
#include "Entidade.h"
class Personagem : public Entidade
{
protected:
	int num_vidas;
	float velY;
	const float gravidade;


public:
	Personagem();
	~Personagem();

	float getVelY() { return velY; }
	void setVelY(float v) { velY = v; }

	void salvarDataBuffer();
	virtual void executar() = 0;
	virtual void salvar() = 0;
	virtual void mover() = 0;

};

