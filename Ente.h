#pragma once
#include "SFML/Graphics.hpp"
class Gerenciador_Grafico; //apagar esta linha depois que criar a classe


class Ente
{
protected:
	int id;
	static float deltaT; //atributo que vai contar o tempo
	static Gerenciador_Grafico* pGG;
	sf::RenderWindow* window;
	sf::Drawable* pFig;
public:
	Ente();
	virtual ~Ente();
	virtual void executar() = 0;
	void desenhar();
	static void setGG(Gerenciador_Grafico* pG);
	static void setDeltaT(float dt) { deltaT = dt; } //setter para atribuir o tempo
	void setWindow(sf::RenderWindow* window) { this->window = window; }
};

