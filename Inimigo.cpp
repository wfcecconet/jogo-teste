#include "Inimigo.h"
#include "Jogador.h"


Inimigo::Inimigo()
{
	body.setFillColor(sf::Color::Red);
	body.setPosition(sf::Vector2f(200.f, 200.f));
	pJog = nullptr;
	nivel_maldade = 0;
}

Inimigo::~Inimigo()
{
}

void Inimigo::salvarDataBuffer()
{
}
