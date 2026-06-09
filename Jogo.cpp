#include "Jogo.h"

Jogo::Jogo()
{
    GG = Gerenciador_Grafico::getInstancia();
    Ente::setGG(GG);
    jogador1 = new Jogador();
    fase1 = new Fase_Primeira(jogador1);
	fase1->incluirJogador(jogador1);
    LEs = fase1->getListaEntidades();

    
    Executar();
}

Jogo::~Jogo()
{
}

void Jogo::Executar()
{
    while (GG->estaAberto())
    {
        float deltaT = clock.restart().asSeconds(); //começa a contagem de tempo
        if (deltaT > 0.05f) deltaT = 0.05f; //verifica condição
        Ente::setDeltaT(deltaT); //chama o metodo para

        sf::Event event;
        while (GG->getWindow()->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                GG->fechar();
        }


		//jogador1->mover();

        //fase1->verificaColisoes();

        for (int i = 0; i < LEs->getLen(); i++) {
            Entidade* temp = LEs->getItem(i);
            temp->executar();
        }
        
        fase1->executar();

        GG->limpar();
        for (int i = 0; i < LEs->getLen(); i++) {
            Entidade* temp = LEs->getItem(i);
            temp->desenhar();

        }
        
        GG->mostrar();
    }

}

