#include "Jogador.h"
#include "Inimigo.h"

void Jogador::colidir(Inimigo* pIn)
{
	num_vidas--;
}

Jogador::Jogador()
{
    pontos = 0;

    num_vidas = 5;
    velY = 0.f;

    body.setSize(sf::Vector2f(25.f, 40.f));
    body.setFillColor(sf::Color::Blue);

    body.setPosition(0.f, 670.f);
}

Jogador::~Jogador()
{
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
    velY += gravidade * deltaT; //calculando a gravidade

    body.move(0.f, velY * deltaT);

    mover();

}

