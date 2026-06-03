#pragma once
#include <SFML/Graphics.hpp>
#include "Ente.h"

class Gerenciador_Grafico
{
private:
	sf::RenderWindow obj;
public:
	Gerenciador_Grafico();
	~Gerenciador_Grafico();

	void desenharEnte(Ente* pE);

};

