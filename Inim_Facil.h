#pragma once
#include "Inimigo.h"

class Jogador;

class Inim_Facil : public Inimigo
{
private:
	float raio;
	float veloc;
	float tempAtaque;
public:
	Inim_Facil();
	~Inim_Facil();

	float getTempAtaque() { return tempAtaque; }
	void setTempAtaque(float t) { tempAtaque = t; }

	void mover();
	void danificar(Jogador* p);
	void executar();
	void salvar();



};

