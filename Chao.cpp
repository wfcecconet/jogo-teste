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
	setPosicao(0.f, 650.f);
	setTamanho(800.f, 500.f);
}
