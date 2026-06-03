#include "Jogo.h"

Jogo::Jogo() :
    window(sf::VideoMode(1280, 720), "Jogo")
{
    jogador1 = new Jogador();
    jogador1->setWindow(&window);
    fase1 = new Fase_Primeira(jogador1, &window);
    LEs = fase1->getListaEntidades();

    Executar();
}

Jogo::~Jogo()
{
}

void Jogo::Executar()
{
    while (window.isOpen())
    {
        float deltaT = clock.restart().asSeconds(); //começa a contagem de tempo
        if (deltaT > 0.05f) deltaT = 0.05f; //verifica condição
        Ente::setDeltaT(deltaT); //chama o método para

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }


		//jogador1->mover();

        fase1->verificaColisoes();

        for (int i = 0; i < LEs->LEs.getLen(); i++) {
            Entidade* temp = LEs->LEs.getItem(i);
            temp->executar();
        }
        
        window.clear();
        for (int i = 0; i < LEs->LEs.getLen(); i++) {
            Entidade* temp = LEs->LEs.getItem(i);
            temp->desenhar();

        }
        window.display();
    }

}
