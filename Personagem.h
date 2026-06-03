#pragma once
#include "Entidade.h"
class Personagem : public Entidade
{
protected:
	int num_vidas;
	float velY;
	const float gravidade;
	bool noChao;

public:
	Personagem();
	~Personagem();

	void setNoChao(bool chao) { noChao = chao; }

	float getVelY() const { return velY; }
	void setVelY(float v) { velY = v; }

	int getVidas() { return num_vidas; }
	void setVidas(int v) { num_vidas = v; }


	void salvarDataBuffer();
	virtual void executar() = 0;
	virtual void salvar() = 0;
	virtual void mover() = 0;

};

