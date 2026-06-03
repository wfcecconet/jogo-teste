#pragma once
#include <SFML/Graphics.hpp>
#include "Jogador.h"
#include "Fase.h"

class Fase_Primeira : public Fase
{
private:
	const int maxInimMedios;

public:
	Fase_Primeira(Jogador* j1, sf::RenderWindow* window) : Fase(j1, window), maxInimMedios(7) {}
	~Fase_Primeira();

protected:

	void criarInimigos(); //herdado
	void criarObstaculo(); //herdado

	void criarInimMedios();
	void criarObstMedios();


};

