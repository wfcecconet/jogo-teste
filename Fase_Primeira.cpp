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

void Fase_Primeira::criarChao()
{
	Chao* chao = new Chao();
	chao->setWindow(pGG->getWindow());
	chao->setCor(sf::Color::Green);
	lista_ents.incluir(chao);
	GC.incluirChao(chao);
}

Fase_Primeira::Fase_Primeira(Jogador* j1) : Fase(j1), maxInimMedios(7)
{
	criarInimigos();
	criarObstaculo();
	criarChao();
}

Fase_Primeira::~Fase_Primeira()
{

}

void Fase_Primeira::executar()
{
	Fase::executar();
}
