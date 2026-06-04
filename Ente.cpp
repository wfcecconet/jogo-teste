#include "Ente.h"

Gerenciador_Grafico* Ente::pGG = nullptr;

float Ente::deltaT = 0.f; //inicializando o atributo

Ente::Ente()
{
	id = 0;
	window = nullptr;
	pFig = nullptr;
}

Ente::~Ente()
{
}


void Ente::desenhar()
{
	if (!window)
		return;

	if (!pFig)
		return;

	window->draw(*pFig);
}

void Ente::setGG(Gerenciador_Grafico* pG)
{
	pGG = pG;
}
