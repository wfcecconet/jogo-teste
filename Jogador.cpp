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
        body.move(sf::Vector2(-0.1f, 0.f));
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
        body.move(sf::Vector2(0.f, 0.1f));
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        body.move(sf::Vector2(0.1f, 0.f));
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
        body.move(sf::Vector2(0.f, -0.1f));
    }

    
}

void Jogador::executar()
{
}

void Jogador::salvar()
{
}
