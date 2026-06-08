#pragma once
#include "Fase.h"
#include <SFML/Graphics.hpp>
#include "Jogador.h"


class Fase_Primeira : public Fase
{
private:
	const int maxInimMedios;
	Jogador* jogador1;

protected:

	void criarInimMedios();
	void criarObstMedios();

	void criarObstaculo(); //herdado
	void criarInimigos(); //herdado
	void criarChao(); //herdado

public:
	Fase_Primeira();
	~Fase_Primeira();
	void executar(); //herdado
	
};

