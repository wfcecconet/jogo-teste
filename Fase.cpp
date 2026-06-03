#include "Fase.h"

void Fase::criarInimFaceis()
{
}

void Fase::criarPlataformas()
{
}

void Fase::criarCenario()
{
}

Fase::Fase()
{

	executar();
}

Fase::~Fase()
{
}

void Fase::executar()
{
	criarCenario();
	criarPlataformas();
	criarInimFaceis();
}
