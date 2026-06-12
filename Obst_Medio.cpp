#include "Obst_Medio.h"

#include <cmath> //necessário pela colisão do jogador

Obst_Medio::Obst_Medio()
{
    altura = 25.f;
    largura = 80.f;
    tempoTroca = 0.f;
    espinhosAtivos = false;
    body.setSize(sf::Vector2f(largura, altura));
    body.setFillColor(sf::Color::Cyan);
}

Obst_Medio::~Obst_Medio()
{
}

void Obst_Medio::executar()
{
    tempoTroca += deltaT;

    if (tempoTroca >= 3.f)
    {
        espinhosAtivos = !espinhosAtivos;
        tempoTroca = 0.f;

        if (espinhosAtivos)
            body.setFillColor(sf::Color::Red);
        else
            body.setFillColor(sf::Color::Cyan);
    }
}

void Obst_Medio::salvar()
{
}

void Obst_Medio::obstaculizar(Jogador* p)
{

	sf::FloatRect obstBounds = getBounds();
	sf::FloatRect jogBounds = p->getBounds();

	//centro de Jogador
	float centroJogX = jogBounds.left + jogBounds.width / 2.f;
	float centroJogY = jogBounds.top + jogBounds.height / 2.f;

	//centro de obstáculo
	float centroObstX = obstBounds.left + obstBounds.width / 2.f;
	float centroObstY = obstBounds.top + obstBounds.height / 2.f;

	//distancia entre os centros
	float dx = centroJogX - centroObstX;
	float dy = centroJogY - centroObstY;

	//sobreposição
	float overlapX = (jogBounds.width / 2.f + obstBounds.width / 2.f) - std::abs(dx);
	float overlapY = (jogBounds.height / 2.f + obstBounds.height / 2.f) - std::abs(dy);

	if (overlapX < overlapY) //colisão veio dos lados
	{
		if (dx < 0) //jogador a esquerda da plataforma
			p->setPosicao(obstBounds.left - jogBounds.width, jogBounds.top);

		else //jogador a direita da plataforma
			p->setPosicao(obstBounds.left + obstBounds.width, jogBounds.top);

	}

	else
	{
		if (dy < 0 && p->getVelY() > 0) //jogador acima da plataforma
		{
			p->setNoChao(true);
			p->setPosicao(jogBounds.left, obstBounds.top - jogBounds.height);
			p->setVelY(0.f);
		}
		else if (dy > 0 && p->getVelY() < 0) // jogador abaixo da plataforma
		{
			p->setVelY(0.f);
			p->setPosicao(jogBounds.left, obstBounds.top + obstBounds.height);
		}
	}

	//dano
	if (espinhosAtivos)
		p->receberDano(1);
}
