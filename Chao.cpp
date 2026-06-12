#include "Chao.h"

Chao::Chao()
{
	executar();
}

Chao::~Chao()
{
}

void Chao::setCor(sf::Color c)
{
	body.setFillColor(c);
}

void Chao::executar()
{
	altura = 30.f;
}

void Chao::colisaoChao(Personagem* p)
{
	sf::FloatRect chaoBounds = getBounds();
	sf::FloatRect jogBounds = p->getBounds();

	//centro de Jogador
	float centroJogX = jogBounds.left + jogBounds.width / 2.f;
	float centroJogY = jogBounds.top + jogBounds.height / 2.f;

	//centro do chão
	float centrochaoX = chaoBounds.left + chaoBounds.width / 2.f;
	float centrochaoY = chaoBounds.top + chaoBounds.height / 2.f;

	//distancia entre os centros
	float dx = centroJogX - centrochaoX;
	float dy = centroJogY - centrochaoY;

	//sobreposição
	float overlapX = (jogBounds.width / 2.f + chaoBounds.width / 2.f) - std::abs(dx);
	float overlapY = (jogBounds.height / 2.f + chaoBounds.height / 2.f) - std::abs(dy);

	if (overlapX < overlapY) //colisão veio dos lados
	{
		if (dx < 0) //jogador a esquerda da plataforma
			p->setPosicao(chaoBounds.left - jogBounds.width, jogBounds.top);

		else //jogador a direita da plataforma
			p->setPosicao(chaoBounds.left + chaoBounds.width, jogBounds.top);

	}

	else
	{
		if (dy < 0 && p->getVelY() > 0) //jogador acima da plataforma
		{
			p->setNoChao(true);
			p->setPosicao(jogBounds.left, chaoBounds.top - jogBounds.height);
			p->setVelY(0.f);
		}
		else if (dy > 0 && p->getVelY() < 0) // jogador abaixo da plataforma
		{
			p->setVelY(0.f);
			p->setPosicao(jogBounds.left, chaoBounds.top + chaoBounds.height);
		}
	}
}
