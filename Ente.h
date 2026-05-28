#pragma once
#include <SFML/Graphics.hpp>
class Gerenciador_Grafico; //apagar esta linha depois que criar a classe


class Ente
{
protected:
	int id;
	static Gerenciador_Grafico* pGG;
	sf::RenderWindow* window;
	sf::Drawable* pFig;
public:
	Ente();
	virtual ~Ente();
	virtual void executar() = 0;
	void draw();
	static void setGG(Gerenciador_Grafico* pG);
	void setWindow(sf::RenderWindow* window) { this->window = window; }
};

