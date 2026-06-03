#pragma once
<<<<<<< HEAD
#include "Fase.h"
=======
#include <SFML/Graphics.hpp>
#include "Jogador.h"
#include "Fase.h"

>>>>>>> cecconet
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
	Fase_Primeira() : maxInimMedios(7) {}
	~Fase_Primeira();


};

