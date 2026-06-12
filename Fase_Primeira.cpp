#include "Fase_Primeira.h"

void Fase_Primeira::criarInimMedios()
{
}

void Fase_Primeira::criarObstMedios()
{
	Obst_Medio* obs1 = new Obst_Medio();

	obs1->setPosicao(320.f, 550.f);

	lista_ents.incluir(obs1);
	GC.incluirObstaculo(obs1);
}

void Fase_Primeira::criarObstaculo()
{
	criarPlataformas();
	//criarObstMedios();
}

void Fase_Primeira::criarInimigos()
{
	criarInimFaceis();
	//criarInimMedios();
}

void Fase_Primeira::criarChao()
{
	
	Chao* chao1 = new Chao();
	float altura = chao1->getAltura();

	chao1->setCor(sf::Color::Green);
	chao1->setTamanho(640.f, altura);
	chao1->setPosicao(0.f, 670.f);

	lista_ents.incluir(chao1);
	GC.incluirChao(chao1);

	Chao* chao2 = new Chao();

	chao2->setCor(sf::Color::Green);
	chao2->setTamanho(320.f, altura);
	chao2->setPosicao(960.f, 670.f);

	lista_ents.incluir(chao2);
	GC.incluirChao(chao2);

	Chao* chao3 = new Chao();

	chao3->setCor(sf::Color::Green);
	chao3->setTamanho(320.f, altura);
	chao3->setPosicao(960.f, 430.f);

	lista_ents.incluir(chao3);
	GC.incluirChao(chao3);

	Chao* chao4 = new Chao();

	chao4->setCor(sf::Color::Green);
	chao4->setTamanho(640.f, altura);
	chao4->setPosicao(0.f, 310.f);

	lista_ents.incluir(chao4);
	GC.incluirChao(chao4);
}

Fase_Primeira::Fase_Primeira() : Fase(), maxInimMedios(7)
{
	criarChao();
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
