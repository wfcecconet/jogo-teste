#include "Fase_Primeira.h"

void Fase_Primeira::criarInimMedios()
{
}

void Fase_Primeira::criarObstMedios()
{
}

void Fase_Primeira::criarObstaculo()
{
}



void Fase_Primeira::criarInimigos()
{
	criarInimFaceis();
	criarInimMedios();
}

Fase_Primeira::Fase_Primeira(Jogador* j1) : Fase(), maxInimMedios(7)
{	
	jogador1 = j1;
	lista_ents.incluir(jogador1);
	GC.incluirJogador(jogador1);
}

Fase_Primeira::~Fase_Primeira()
{
}


