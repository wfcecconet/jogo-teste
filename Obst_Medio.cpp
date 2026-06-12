#include "Obst_Medio.h"

#include <cmath> //necessário pela colisão do jogador

Obst_Medio::Obst_Medio()
{
    altura = 25.f;
    largura = 200.f;
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

	if (std::abs(dy) < std::abs(dx) && p->getVelY() < 0) //colisão veio dos lados
	{
		if (dx < 0) //jogador a esquerda da plataforma
			p->setPosicao(obstBounds.left - jogBounds.width, jogBounds.top);

		else //jogador a direita da plataforma
			p->setPosicao(obstBounds.left + obstBounds.width, jogBounds.top);
	}

	else if (std::abs(dy) > std::abs(dx)) //colisão veio de cima ou de baixo
	{
		if (dy < 0) //jogador acima da plataforma
		{
			p->setNoChao(true);
			p->setVelY(0.f);
			p->setPosicao(jogBounds.left, obstBounds.top - jogBounds.height);
		}
		else // jogador abaixo da plataforma
		{
			p->setVelY(0.f);
			p->setPosicao(jogBounds.left, obstBounds.top + obstBounds.height);
		}
	}
	else //jogador esta na borda da  plataforma, entao vamos considerar que ele esta colidindo de cima, e se ele estiver caindo, ele vai ficar em cima da plataforma
	{
		if (p->getVelY() > 0)
		{
			p->setNoChao(true);
			p->setVelY(0.f);
			p->setPosicao(jogBounds.left, obstBounds.top - jogBounds.height);
		}
	}

	//dano
	if (espinhosAtivos)
		p->receberDano(1);
}
