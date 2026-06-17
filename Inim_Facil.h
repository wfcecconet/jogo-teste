#pragma once
#include "Inimigo.h"

class Jogador;

class Inim_Facil : public Inimigo
{
private:
	sf::Texture textura;
	sf::Sprite sprite;
	float raio;
	float veloc;
	float tempAtaque;
	float limiteEsq;
	float limiteDir;
	bool movendoDireita;

public:
	Inim_Facil();
	~Inim_Facil();

	float getTempAtaque() { return tempAtaque; }
	void setTempAtaque(float t) { tempAtaque = t; }
	void setLimites(float esq, float dir);

	void mover();
	void danificar(Jogador* p);
	void executar();
	void salvar();



};

