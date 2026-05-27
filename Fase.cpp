#include "Fase.h"

Fase::Fase(Jogador* j1, sf::RenderWindow* window)
{
	this->window = window;
	this->j1 = j1;
	listaEntidades = new ListaEntidades();
	i1 = new Inim_Facil();
	i1->setWindow(window);
	inicializaElementos();

}

Fase::~Fase()
{
}

void Fase::verificaColisoes()
{
	for (int j = 0; j < pP->getLen(); j++) {
		Personagem* perS = pP->getItem(j);
		for (int i = 0; i < pF->getLen(); i++) {
			Plataforma* plaT = pF->getItem(i);
			if (perS->getBounds().intersects(plaT->getBounds()) && perS->getVelY() > 0.f) {
				//perS->setNoChao(true);
				perS->setVelY(0.f);
				// reposiciona o jogador em cima da plataforma
				perS->setPosicao(j1->getBounds().left, plaT->getBounds().top - perS->getBounds().height);
			}
		}
	}
}

void Fase::inicializaElementos()
{
	listaEntidades->LEs.push(j1);
	listaEntidades->LEs.push(i1);

	pF = new Lista<Plataforma>();

	Plataforma* pf1 = new Plataforma();
	pf1->setWindow(window);
	pf1->setPosicao(0.f, 500.f);
	pf1->setTamanho(1280.f, 20.f);
	pF->push(pf1);

	listaEntidades->LEs.push(pf1);

}