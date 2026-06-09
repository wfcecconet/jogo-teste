#include "Plataforma.h"

Plataforma::Plataforma()
{
	danoso = false;
	//altura = getBounds().height; altura ainda não utilizada
	body.setFillColor(sf::Color::White);
	body.setSize(sf::Vector2f(300.f, 30.f));
}

Plataforma::~Plataforma()
{
}

void Plataforma::salvar()
{
}

void Plataforma::executar()
{
}

void Plataforma::obstaculizar(Jogador* p)
{
	sf::FloatRect platBounds = getBounds();
	sf::FloatRect jogBounds = p->getBounds();
	p->setNoChao(true);
	p->setVelY(0.f);
	p->setPosicao(jogBounds.left, platBounds.top - jogBounds.height);
}
