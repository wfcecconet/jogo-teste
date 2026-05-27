#include "Inim_Facil.h"
#include "Jogador.h"

Inim_Facil::Inim_Facil() : raio(0.f), veloc(100.f)
{
	tempAtaque = 0.f;
}

Inim_Facil::~Inim_Facil()
{
	
}

void Inim_Facil::mover()
{
	sf::Vector2f posJog = pJog->getPosicao();
	sf::Vector2f posInim = getPosicao();

	if (posJog.x > posInim.x)
		body.move(veloc * deltaT, 0.f);
	else
		body.move(-veloc * deltaT, 0.f);
}

void Inim_Facil::danificar(Jogador* p)
{
	p->setVidas(p->getVidas() - 1);
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

