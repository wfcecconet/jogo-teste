#pragma once
#include <SFML/Graphics.hpp>
#include "Jogador.h"
#include "Inimigo.h"
#include "ListaEntidades.h"
#include "Fase_Primeira.h"

class Jogo{
private:
	sf::RenderWindow window;
	sf::Clock clock;
	Jogador *jogador1;
	ListaEntidades* LEs;
	Fase* fase1;
	Gerenciador_Grafico GG;
public:
	Jogo();
	~Jogo();
	void Executar();

};

