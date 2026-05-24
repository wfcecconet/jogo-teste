#include "Ente.h"

Gerenciador_Grafico* Ente::pGG = nullptr;

Ente::Ente()
{
	id = 0;
	window = nullptr;
	pFig = nullptr;
}

Ente::~Ente()
{
}

void Ente::draw()
{
	window->draw(*pFig);
}

void Ente::setGG(Gerenciador_Grafico* pG)
{
	pGG = pG;
}
