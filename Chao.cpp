#include "Chao.h"

Chao::Chao()
{
	executar();
}

Chao::~Chao()
{
}

void Chao::setCor(sf::Color c)
{
	body.setFillColor(c);
}

void Chao::executar()
{
	altura = 50.f;
}
