#include "Plataforma.h"

#include <cmath> //necessário pela colisão do jogador

Plataforma::Plataforma()
{
	danoso = false;
	velocidade = 100.f;
	altura = 0.f;
	largura = 0.f;

	executar();
}

Plataforma::~Plataforma()
{
}

void Plataforma::salvar()
{
}

void Plataforma::executar()
{
	
	altura = 25.f;
	largura = 150.f;

	body.setSize(sf::Vector2f(largura, altura));
	body.setFillColor(sf::Color::White);
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

	if (std::abs(dy) > std::abs(dx)) //módulo da distância entre os centros verticais é maior do que a dos horizontais, significa que a colisão veio de cima ou de baixo
	{
		if (dy < 0) //jogador acima da plataforma
		{
			p->setNoChao(true);
			p->setVelY(0.f);
			p->setPosicao(jogBounds.left, platBounds.top - jogBounds.height);
		}
		else // jogador abaixo da plataforma
		{
			p->setVelY(0.f);
			p->setPosicao(jogBounds.left, platBounds.top + platBounds.height);
		}
	}

	else //colisão veio dos lados
	{
		if (dx < 0) //jogador a esquerda da plataforma
			p->setPosicao(platBounds.left-jogBounds.width , jogBounds.top);

		else //jogador a direita da plataforma
			p->setPosicao(platBounds.left + platBounds.width, jogBounds.top);
	}
		

}
