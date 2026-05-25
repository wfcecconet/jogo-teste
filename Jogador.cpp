#include "Jogador.h"
#include "Inimigo.h"

void Jogador::colidir(Inimigo* pIn)
{
}

Jogador::Jogador()
{
    noChao = false;
}

Jogador::~Jogador()
{
}

void Jogador::mover()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
        body.move(sf::Vector2(-0.6f, 0.f));
    }

    /*if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
        body.move(sf::Vector2(0.f, 0.4f));
    }*/

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        body.move(sf::Vector2(0.6f, 0.f));
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && noChao) {
        velY = -1.6f;
        noChao = false;
    }

    
}

void Jogador::executar()
{
    velY += gravidade;
    
    body.move(0.f, velY);

    mover();

}

void Jogador::salvar()
{
}
