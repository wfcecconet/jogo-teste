#pragma once
#include <SFML/Graphics.hpp>
#include "Ente.h"

class Gerenciador_Grafico
{
private:
	sf::RenderWindow& obj;
public:
	Gerenciador_Grafico(sf::RenderWindow& window);
	~Gerenciador_Grafico();

	void desenharEnte(Ente* pE);
	
	void limpar();
	void mostrar();
	const bool estaAberto() const;
	void fechar();

};

