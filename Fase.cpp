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

    srand(time(0));
    int numEnem = (rand() % 3) + 3;

    Inim_Facil* inim1 = new Inim_Facil();

    inim1->setPosicao(500.f, 630.);
    lista_ents.incluir(inim1);
    GC.incluirInimigo(inim1);

}
void Fase::criarPlataformas()
{
    srand(time(0));
	int numPlat=(rand() % 3) + 3;

    if (numPlat == 3)
    {
        Plataforma* pl1 = new Plataforma();

        pl1->setPosicao(720.f, 600.f);

        lista_ents.incluir(pl1);
        GC.incluirObstaculo(pl1);

        Plataforma* pl2 = new Plataforma();

        pl2->setPosicao(880.f, 550.f);

        lista_ents.incluir(pl2);
        GC.incluirObstaculo(pl2);

        Plataforma* pl3 = new Plataforma();

        pl3->setPosicao(800.f, 250.f);

        lista_ents.incluir(pl3);
        GC.incluirObstaculo(pl3);
    }

    if (numPlat == 4)
    {
        Plataforma* pl1 = new Plataforma();

        pl1->setPosicao(720.f, 600.f);

        lista_ents.incluir(pl1);
        GC.incluirObstaculo(pl1);

        Plataforma* pl2 = new Plataforma();

        pl2->setPosicao(880.f, 550.f);

        lista_ents.incluir(pl2);
        GC.incluirObstaculo(pl2);

        Plataforma* pl3 = new Plataforma();

        pl3->setPosicao(670.f, 275.f);

        lista_ents.incluir(pl3);
        GC.incluirObstaculo(pl3);

        Plataforma* pl4 = new Plataforma();

        pl4->setPosicao(830.f, 205.f);

        lista_ents.incluir(pl4);
        GC.incluirObstaculo(pl4);
    }

    if (numPlat == 5)
    {
        Plataforma* pl1 = new Plataforma();

        pl1->setPosicao(720.f, 600.f);

        lista_ents.incluir(pl1);
        GC.incluirObstaculo(pl1);

        Plataforma* pl2 = new Plataforma();

        pl2->setPosicao(880.f, 550.f);

        lista_ents.incluir(pl2);
        GC.incluirObstaculo(pl2);

        Plataforma* pl3 = new Plataforma();

        pl3->setPosicao(670.f, 275.f);

        lista_ents.incluir(pl3);
        GC.incluirObstaculo(pl3);

        Plataforma* pl4 = new Plataforma();

        pl4->setPosicao(830.f, 205.f);

        lista_ents.incluir(pl4);
        GC.incluirObstaculo(pl4);

        Plataforma* pl5 = new Plataforma();

        pl5->setPosicao(820.f, 600.f);

        lista_ents.incluir(pl5);
        GC.incluirObstaculo(pl5);
    }

    if (numPlat == 6)
    {
        Plataforma* pl1 = new Plataforma();

        pl1->setPosicao(400.f, 600.f);

        lista_ents.incluir(pl1);
        GC.incluirObstaculo(pl1);

        Plataforma* pl2 = new Plataforma();

        pl2->setPosicao(300.f, 530.f);

        lista_ents.incluir(pl2);
        GC.incluirObstaculo(pl2);

        Plataforma* pl3 = new Plataforma();

        pl3->setPosicao(200.f, 460.f);

        lista_ents.incluir(pl3);
        GC.incluirObstaculo(pl3);

        Plataforma* pl4 = new Plataforma();

        pl4->setPosicao(100.f, 390.f);

        lista_ents.incluir(pl4);
        GC.incluirObstaculo(pl4);

        Plataforma* pl5 = new Plataforma();

        pl5->setPosicao(670.f, 275.f);

        lista_ents.incluir(pl5);
        GC.incluirObstaculo(pl5);

        Plataforma* pl6 = new Plataforma();

        pl6->setPosicao(830.f, 205.f);

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
