#include "Inim_Facil.h"
#include "Jogador.h"

Inim_Facil::Inim_Facil() : raio(0.f), veloc(100.f)
{
	tempAtaque = 0.f;
	body.setSize(sf::Vector2f(50.f, 50.f));
	body.setFillColor(sf::Color::Red);

}

Inim_Facil::~Inim_Facil()
{
	
}

void Inim_Facil::mover()
{
	if (pJog == nullptr) return;

	sf::Vector2f posJog = pJog->getPosicao();
	sf::Vector2f posInim = getPosicao();

	if (posJog.x > posInim.x)
		body.move(veloc * deltaT, 0.f);
	else
		body.move(-veloc * deltaT, 0.f);

}

void Inim_Facil::danificar(Jogador* p)
{
	p->colidir(this);
}

void Inim_Facil::executar()
{
	if (tempAtaque > 0.f)
		tempAtaque -= deltaT;

	velY += gravidade * deltaT;
	body.move(0.f, velY * deltaT);
	mover();

}

void Inim_Facil::salvar()
{
}

