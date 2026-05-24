#include "Entidade.h"

Entidade::Entidade():body(sf::Vector2f(64.f, 64.f))
{
	pFig = &body;
}
Entidade::~Entidade()
{
}