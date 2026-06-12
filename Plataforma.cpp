#include "Plataforma.h"

#include <cmath> //necessário pela colisão do jogador

Plataforma::Plataforma()
{
	danoso = false;
	altura = 25.f;
	largura = 80.f;
	body.setSize(sf::Vector2f(largura, altura));
	body.setFillColor(sf::Color::White);
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

	//centro de Jogador
	float centroJogX = jogBounds.left + jogBounds.width / 2.f;
	float centroJogY = jogBounds.top + jogBounds.height / 2.f;

	//centro de plataforma
	float centroPlatX = platBounds.left + platBounds.width / 2.f;
	float centroPlatY = platBounds.top + platBounds.height / 2.f;

	//distancia entre os centros
	float dx = centroJogX - centroPlatX;
	float dy = centroJogY - centroPlatY;

	//sobreposição
	float overlapX = (jogBounds.width / 2.f + platBounds.width / 2.f) - std::abs(dx);
	float overlapY = (jogBounds.height / 2.f + platBounds.height / 2.f) - std::abs(dy);

	if (overlapX < overlapY) //colisão veio dos lados
	{
		if (dx < 0) //jogador a esquerda da plataforma
			p->setPosicao(platBounds.left-jogBounds.width , jogBounds.top);

		else //jogador a direita da plataforma
			p->setPosicao(platBounds.left + platBounds.width, jogBounds.top);

	}
	
	else
	{
		if (dy < 0 && p->getVelY() > 0) //jogador acima da plataforma
		{
			p->setNoChao(true);
			p->setPosicao(jogBounds.left, platBounds.top - jogBounds.height);
			p->setVelY(0.f);
		}
		else if (dy > 0 && p->getVelY() < 0) // jogador abaixo da plataforma
		{
			p->setVelY(0.f);
			p->setPosicao(jogBounds.left, platBounds.top + platBounds.height);
		}
	}

}