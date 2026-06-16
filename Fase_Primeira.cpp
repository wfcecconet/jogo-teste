#include "Fase_Primeira.h"
#include "Inim_Medio.h"

#include<cstdlib>
#include <ctime>

void Fase_Primeira::criarInimMedios()
{
	srand(static_cast<unsigned int>(time(0)));
	int numEnem = (rand() % 2) + 2;

	for (int i = 0; i < numEnem; i++) {
		if (posDisponiveis.empty()) break;

		int idx = rand() % posDisponiveis.size();
		sf::FloatRect area = posDisponiveis[idx];

		if (area.width > 50.f){
			Inim_Medio* inim = new Inim_Medio();
			float posX = area.left + (rand() % (int)area.width);
			float posY = area.top - 35.f;

			inim->setPosicao(posX, posY);
			lista_ents.incluir(inim);
			GC.incluirInimigo(inim);
		}
	}
}

void Fase_Primeira::criarObstMedios()
{
	srand(time(0));
	int numObst = (rand() % 4) + 3;

	if (numObst == 3)
	{
		Obst_Medio* obs1 = new Obst_Medio();

		obs1->setPosicao(880.f, 440.f);

		lista_ents.incluir(obs1);
		GC.incluirObstaculo(obs1);

		Obst_Medio* obs2 = new Obst_Medio();

		obs2->setPosicao(720.f, 390.f);

		lista_ents.incluir(obs2);
		GC.incluirObstaculo(obs2);

		Obst_Medio* obs3 = new Obst_Medio();

		obs3->setPosicao(820.f, 320.f);

		lista_ents.incluir(obs3);
		GC.incluirObstaculo(obs3);
	}

	if (numObst == 4)
	{
		Obst_Medio* obs1 = new Obst_Medio();

		obs1->setPosicao(880.f, 440.f);

		lista_ents.incluir(obs1);
		GC.incluirObstaculo(obs1);

		Obst_Medio* obs2 = new Obst_Medio();

		obs2->setPosicao(720.f, 390.f);

		lista_ents.incluir(obs2);
		GC.incluirObstaculo(obs2);

		Obst_Medio* obs3 = new Obst_Medio();

		obs3->setPosicao(820.f, 320.f);

		lista_ents.incluir(obs3);
		GC.incluirObstaculo(obs3);

		Obst_Medio* obs4 = new Obst_Medio();
		obs4->flip();

		obs4->setPosicao(570.f, 590.f);

		lista_ents.incluir(obs4);
		GC.incluirObstaculo(obs4);
	}

	if (numObst == 5)
	{
		Obst_Medio* obs1 = new Obst_Medio();

		obs1->setPosicao(880.f, 440.f);

		lista_ents.incluir(obs1);
		GC.incluirObstaculo(obs1);

		Obst_Medio* obs2 = new Obst_Medio();

		obs2->setPosicao(720.f, 390.f);

		lista_ents.incluir(obs2);
		GC.incluirObstaculo(obs2);

		Obst_Medio* obs3 = new Obst_Medio();

		obs3->setPosicao(820.f, 320.f);

		lista_ents.incluir(obs3);
		GC.incluirObstaculo(obs3);

		Obst_Medio* obs4 = new Obst_Medio();
		obs4->flip();

		obs4->setPosicao(570.f, 590.f);

		lista_ents.incluir(obs4);
		GC.incluirObstaculo(obs4);

		Obst_Medio* obs5 = new Obst_Medio();
		obs5->flip();

		obs5->setPosicao(1090.f, 420.f);

		lista_ents.incluir(obs5);
		GC.incluirObstaculo(obs5);
	}

	if (numObst == 6)
	{
		Obst_Medio* obs1 = new Obst_Medio();

		obs1->setPosicao(880.f, 440.f);

		lista_ents.incluir(obs1);
		GC.incluirObstaculo(obs1);

		Obst_Medio* obs2 = new Obst_Medio();

		obs2->setPosicao(720.f, 390.f);

		lista_ents.incluir(obs2);
		GC.incluirObstaculo(obs2);

		Obst_Medio* obs3 = new Obst_Medio();

		obs3->setPosicao(820.f, 320.f);

		lista_ents.incluir(obs3);
		GC.incluirObstaculo(obs3);

		Obst_Medio* obs4 = new Obst_Medio();
		obs4->flip();

		obs4->setPosicao(570.f, 590.f);

		lista_ents.incluir(obs4);
		GC.incluirObstaculo(obs4);

		Obst_Medio* obs5 = new Obst_Medio();
		obs5->flip();

		obs5->setPosicao(1090.f, 420.f);

		lista_ents.incluir(obs5);
		GC.incluirObstaculo(obs5);

		Obst_Medio* obs6 = new Obst_Medio();
		obs6->flip();

		obs6->setPosicao(980.f, 100.f);

		lista_ents.incluir(obs6);
		GC.incluirObstaculo(obs6);


	}
	


}

void Fase_Primeira::criarObstaculo()
{
	criarPlataformas();
	criarObstMedios();
}

void Fase_Primeira::criarInimigos()
{
	criarInimFaceis();
	criarInimMedios();
}

void Fase_Primeira::criarChao()
{
	
	Chao* chao1 = new Chao();
	float altura = chao1->getAltura();

	chao1->setCor(sf::Color::Green);
	chao1->setTamanho(640.f, altura);
	chao1->setPosicao(0.f, 670.f);
	posDisponiveis.push_back(chao1->getBounds());
	lista_ents.incluir(chao1);
	GC.incluirChao(chao1);
	

	Chao* chao2 = new Chao();

	chao2->setCor(sf::Color::Green);
	chao2->setTamanho(320.f, altura);
	chao2->setPosicao(1060.f, 500.f);
	posDisponiveis.push_back(chao2->getBounds());
	lista_ents.incluir(chao2);
	GC.incluirChao(chao2);
	

	Chao* chao3 = new Chao();

	chao3->setCor(sf::Color::Green);
	chao3->setTamanho(320.f, altura);
	chao3->setPosicao(960.f, 180.f);
	posDisponiveis.push_back(chao3->getBounds());
	lista_ents.incluir(chao3);
	GC.incluirChao(chao3);
	

	Chao* chao4 = new Chao();

	chao4->setCor(sf::Color::Green);
	chao4->setTamanho(440.f, altura);
	chao4->setPosicao(200.f, 310.f);
	posDisponiveis.push_back(chao4->getBounds());
	lista_ents.incluir(chao4);
	GC.incluirChao(chao4);
	
}

Fase_Primeira::Fase_Primeira() : Fase(), maxInimMedios(7)
{
	criarChao();
	criarObstaculo();
	criarInimigos();
}

Fase_Primeira::~Fase_Primeira()
{
}

void Fase_Primeira::executar()
{
	Fase::executar();
}
