#pragma once
#include <SFML/Graphics.hpp>
#include "Jogador.h"
#include "Inimigo.h"
#include "ListaEntidades.h"
#include "Fase_Primeira.h"

using namespace sf;

class Jogo{
private:
	
	Clock clock;
	Jogador* jogador1;
	//Jogador* jogador2;
	ListaEntidades* LEs;
	Fase* fase1;
	Gerenciador_Grafico* GG;
	Sprite* pSprite;
	Texture* pTextura;
public:
	Jogo();
	~Jogo();
	void Executar();
	void carregarFundo();

};

