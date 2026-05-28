#include "Plataforma.h"

Plataforma::Plataforma()
{
	danoso = false;
	altura = getBounds()->height;
}

Plataforma::~Plataforma()
{
}

void Plataforma::executar()
{
}

void Plataforma::obstaculizar(Jogador* p)
{
	sf::FloatRect pBounds = getBounds();
	sf::FloatRect jBounds = p->getBounds();
	p->setNoChao(true);
	p->setVelY(0.f);
	p->setPosicao(jBounds.left, pBounds.top - jBounds.height);
}
