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

    body.setSize(sf::Vector2f(50.f, 80.f));
    body.setFillColor(sf::Color::Blue);

    body.setPosition(100.f, 100.f);
}

Jogador::~Jogador()
{
}

void Jogador::mover()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
        body.move(sf::Vector2(-0.4f, 0.f));
    }

    /*if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
        body.move(sf::Vector2(0.f, 0.4f));
    }*/

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        body.move(sf::Vector2(0.4f, 0.f));
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && noChao) {
        velY = -600.f;
        noChao = false;
    }


}

void Jogador::executar()
{
    velY += gravidade * deltaT; //calculando a gravidade

    body.move(0.f, velY * deltaT);

    mover();

}

void Jogador::salvar()
{
}
