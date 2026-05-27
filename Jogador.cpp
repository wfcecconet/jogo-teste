#include "Jogador.h"
#include "Inimigo.h"

void Jogador::colidir(Inimigo* pIn)
{
}

Jogador::Jogador()
{
    
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
