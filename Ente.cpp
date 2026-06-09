#include "Ente.h"

Gerenciador_Grafico* Ente::pGG = nullptr;

float Ente::deltaT = 0.f; //inicializando o atributo

Ente::Ente()
{
	id = 0;
	pFig = nullptr;
}

Ente::~Ente()
{
}


void Ente::desenhar()
{

	if (!pFig) return;

	pGG->getWindow()->draw(*pFig);
}

void Ente::setGG(Gerenciador_Grafico* pG)
{
	pGG = pG;
}
