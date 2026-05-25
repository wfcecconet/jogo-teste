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
	for (int i = 0; i < pF->getLen(); i++) {
		Plataforma* p = pF->getItem(i);
		if (j1->getBounds().intersects(p->getBounds()) && j1->getVelY() > 0.f) {
			j1->setNoChao(true);
			j1->setVelY(0.f);
			// reposiciona o jogador em cima da plataforma
			j1->setPosicao(j1->getBounds().left, p->getBounds().top - j1->getBounds().height);
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