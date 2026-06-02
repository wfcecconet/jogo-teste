#pragma once
#include "Fase.h"
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

