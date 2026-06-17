#include "Fase.h"

#include<cstdlib>
#include <ctime>
using namespace std;

void Fase::incluirJogador(Jogador* j)
{
    pJog = j;
    lista_ents.incluir(j);
    GC.incluirJogador(j);
    GC.setJogadorInimigos();
}

void Fase::criarInimFaceis()
{
    srand(static_cast<unsigned int>(time(0)));
    int numEnem = (rand() % 3) + 3;

    for (int i = 0; i < numEnem; i++) {
        
        int idx = rand() % posDisponiveis.size();
        sf::FloatRect area = posDisponiveis[idx];

        if(area.width > 50.f){
            Inim_Facil* inim = new Inim_Facil();
            float posX = area.left + (rand() % (int)area.width);
            float posY = area.top - 25.f;

            inim->setPosicao(posX, posY);
            inim->setLimites(area.left, area.left + area.width - 38);
            lista_ents.incluir(inim);
            GC.incluirInimigo(inim);
        }
    }

}
void Fase::criarPlataformas()
{
    srand(time(0));
	int numPlat=(rand() % 4) + 3;

    if (numPlat == 3)
    {
        Plataforma* pl1 = new Plataforma();

        pl1->setPosicao(720.f, 600.f);
        posDisponiveis.push_back(pl1->getBounds());
        lista_ents.incluir(pl1);
        GC.incluirObstaculo(pl1);
        

        Plataforma* pl2 = new Plataforma();

        pl2->setPosicao(880.f, 550.f);
        posDisponiveis.push_back(pl2->getBounds());
        lista_ents.incluir(pl2);
        GC.incluirObstaculo(pl2);
        

        Plataforma* pl3 = new Plataforma();

        pl3->setPosicao(800.f, 250.f);
        posDisponiveis.push_back(pl3->getBounds());
        lista_ents.incluir(pl3);
        GC.incluirObstaculo(pl3);
        

    }

    if (numPlat == 4)
    {
        Plataforma* pl1 = new Plataforma();

        pl1->setPosicao(720.f, 600.f);
        posDisponiveis.push_back(pl1->getBounds());

        lista_ents.incluir(pl1);
        GC.incluirObstaculo(pl1);

        Plataforma* pl2 = new Plataforma();

        pl2->setPosicao(880.f, 550.f);
        posDisponiveis.push_back(pl2->getBounds());

        lista_ents.incluir(pl2);
        GC.incluirObstaculo(pl2);

        Plataforma* pl3 = new Plataforma();

        pl3->setPosicao(670.f, 275.f);
        posDisponiveis.push_back(pl3->getBounds());
        lista_ents.incluir(pl3);
        GC.incluirObstaculo(pl3);

        Plataforma* pl4 = new Plataforma();

        pl4->setPosicao(830.f, 205.f);
        posDisponiveis.push_back(pl4->getBounds());
        lista_ents.incluir(pl4);
        GC.incluirObstaculo(pl4);
    }

    if (numPlat == 5)
    {
        Plataforma* pl1 = new Plataforma();

        pl1->setPosicao(720.f, 600.f);
        posDisponiveis.push_back(pl1->getBounds());
        lista_ents.incluir(pl1);
        GC.incluirObstaculo(pl1);

        Plataforma* pl2 = new Plataforma();

        pl2->setPosicao(880.f, 550.f);
        posDisponiveis.push_back(pl2->getBounds());
        lista_ents.incluir(pl2);
        GC.incluirObstaculo(pl2);

        Plataforma* pl3 = new Plataforma();

        pl3->setPosicao(670.f, 275.f);
        posDisponiveis.push_back(pl3->getBounds());
        lista_ents.incluir(pl3);
        GC.incluirObstaculo(pl3);

        Plataforma* pl4 = new Plataforma();

        pl4->setPosicao(830.f, 205.f);
        posDisponiveis.push_back(pl4->getBounds());
        lista_ents.incluir(pl4);
        GC.incluirObstaculo(pl4);

        Plataforma* pl5 = new Plataforma();

        pl5->setPosicao(820.f, 600.f);
        posDisponiveis.push_back(pl5->getBounds());
        lista_ents.incluir(pl5);
        GC.incluirObstaculo(pl5);
    }

    if (numPlat == 6)
    {
        Plataforma* pl1 = new Plataforma();

        pl1->setPosicao(400.f, 600.f);
        posDisponiveis.push_back(pl1->getBounds());
        lista_ents.incluir(pl1);
        GC.incluirObstaculo(pl1);

        Plataforma* pl2 = new Plataforma();

        pl2->setPosicao(300.f, 530.f);
        posDisponiveis.push_back(pl2->getBounds());
        lista_ents.incluir(pl2);
        GC.incluirObstaculo(pl2);

        Plataforma* pl3 = new Plataforma();

        pl3->setPosicao(200.f, 460.f);
        posDisponiveis.push_back(pl3->getBounds());
        lista_ents.incluir(pl3);
        GC.incluirObstaculo(pl3);

        Plataforma* pl4 = new Plataforma();

        pl4->setPosicao(100.f, 390.f);
        posDisponiveis.push_back(pl4->getBounds());
        lista_ents.incluir(pl4);
        GC.incluirObstaculo(pl4);

        Plataforma* pl5 = new Plataforma();

        pl5->setPosicao(670.f, 275.f);
        posDisponiveis.push_back(pl5->getBounds());
        lista_ents.incluir(pl5);
        GC.incluirObstaculo(pl5);

        Plataforma* pl6 = new Plataforma();

        pl6->setPosicao(830.f, 205.f);
        posDisponiveis.push_back(pl6->getBounds());
        lista_ents.incluir(pl6);
        GC.incluirObstaculo(pl6);
    }



}

void Fase::criarCenario()
{
}

Fase::Fase()
{
    pJog = nullptr;
    criarCenario();
}

Fase::~Fase()
{
}

void Fase::executar()
{
	GC.executar();
}
