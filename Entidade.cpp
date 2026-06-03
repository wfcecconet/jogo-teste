#include "Entidade.h"

void Entidade::salvarDataBuffer()
{
}

Entidade::Entidade() : body(sf::Vector2f(64.f, 64.f))
{
	pFig = &body;
	x = 0;
	y = 0;
}

Entidade::~Entidade()
{
}
