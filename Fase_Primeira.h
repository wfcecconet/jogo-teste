#pragma once
#include "Fase.h"
#include <SFML/Graphics.hpp>
#include "Jogador.h"


class Fase_Primeira : public Fase
{
private:
	const int maxInimMedios;

protected:

	void criarInimMedios();
	void criarObstMedios();

	void criarObstaculo(); //herdado
	void criarInimigos(); //herdado

public:
	Fase_Primeira(Jogador* j1, sf::RenderWindow* window);
	~Fase_Primeira();


};

