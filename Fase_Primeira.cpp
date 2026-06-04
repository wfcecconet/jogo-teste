#include "Fase_Primeira.h"

void Fase_Primeira::criarInimMedios()
{
}

void Fase_Primeira::criarObstMedios()
{
}

void Fase_Primeira::criarObstaculo()
{
	criarPlataformas();
}

void Fase_Primeira::criarInimigos()
{
	criarInimFaceis();
	//criarInimMedios();
}

Fase_Primeira::Fase_Primeira() : Fase(), maxInimMedios(7)
{
	criarInimigos();
	criarObstaculo();
}

Fase_Primeira::~Fase_Primeira()
{

}

void Fase_Primeira::executar()
{
	Fase::executar();
}
