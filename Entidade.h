#pragma once
#include <sstream>
#include "Ente.h"
#include<SFML/Graphics.hpp>


class Entidade : public Ente
{
protected:

	std::ostringstream buffer;
	sf::RectangleShape body;
public:
	Entidade();
	~Entidade();

	void setPosicao(float x, float y) { body.setPosition(x, y); }
	void setTamanho(float larg, float alt) { body.setSize(sf::Vector2f(larg, alt)); }

	sf::Vector2f getPosicao() { return body.getPosition(); }


	sf::FloatRect getBounds() { return body.getGlobalBounds(); }


	void salvarDataBuffer();

	virtual void executar() = 0;

	virtual void salvar() = 0;

};

