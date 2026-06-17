#pragma once
#include <cmath>
#include "Inimigo.h"

class Jogador;


class Inim_Medio : public Inimigo
{
private:
	sf::Texture textura;
	sf::Sprite sprite;
	float raio;
	float veloc;
	int tamanho;
	

public:

	Inim_Medio();
	~Inim_Medio();


	void executar(); //herdada de Inimigo->Personagem->Entidade->Ente

	void salvar(); //herdada de Inimigo->Personagem->Entidade 
	
	void mover(); //herdada de Inimigo->Personagem

	void danificar(Jogador* p); //herdada de Inimigo


};

