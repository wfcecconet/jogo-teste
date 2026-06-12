#include "Jogador.h"
#include "Inimigo.h"

Jogador::Jogador()
{
    pontos = 0;
    invulnerabilidade = 0.f;
    num_vidas = 10;
    velY = 0.f;

    body.setSize(sf::Vector2f(25.f, 40.f));
    body.setFillColor(sf::Color::Blue);

    body.setPosition(0.f, 570.f);
}

Jogador::~Jogador()
{
}

void Jogador::colidir(Inimigo* pIn)
{
	pIn->danificar(this);
}

void Jogador::receberDano(int dano)
{
    if (invulnerabilidade <= 0.f)
    {
        num_vidas -= dano;
        invulnerabilidade = 1.f;
    }
}

void Jogador::mover()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
        body.move(sf::Vector2(-0.2f, 0.f));
    }

    /*if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
        body.move(sf::Vector2(0.f, 0.4f));
    }*/

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        body.move(sf::Vector2(0.2f, 0.f));
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && noChao) {
        velY = -450.f;
        noChao = false;
    }


}

void Jogador::executar()
{
    if (invulnerabilidade > 0.f) //tempo da invunerabilidade diminuindo
    {
		if (static_cast<int>(invulnerabilidade * 10) % 2 == 0) //piscar o jogador durante a invulnerabilidade
			body.setFillColor(sf::Color::Red);
		else
			body.setFillColor(sf::Color::Blue);
        invulnerabilidade -= deltaT;
    }    
    else
        body.setFillColor(sf::Color::Blue);
     
    if (num_vidas <= 0)
    {
        body.setPosition(-100.f, 670.f);
    }

    velY += gravidade * deltaT; //calculando a gravidade

    body.move(0.f, velY * deltaT);

    mover();

}

