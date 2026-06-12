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
    for (int i = 0; i < 5; i++)
    {
        Inim_Facil* inim = new Inim_Facil();

        

        inim->setPosicao(200.f + i * 180.f, 300.);
        lista_ents.incluir(inim);
        GC.incluirInimigo(inim);

    }
}
void Fase::criarPlataformas()
{
    srand(time(0));
	int numPlat=(rand() % 3) + 3;

    if (numPlat == 3)
    {
        Plataforma* pl1 = new Plataforma();

        pl1->setPosicao(720.f, 550.f);

        lista_ents.incluir(pl1);
        GC.incluirObstaculo(pl1);

        Plataforma* pl2 = new Plataforma();

        pl2->setPosicao(100.f, 200.f);

        lista_ents.incluir(pl2);
        GC.incluirObstaculo(pl2);

        Plataforma* pl3 = new Plataforma();

        pl3->setPosicao(300.f, 100.f);

        lista_ents.incluir(pl3);
        GC.incluirObstaculo(pl3);
    }

    if (numPlat == 4)
    {
        Plataforma* pl1 = new Plataforma();

        pl1->setPosicao(720.f, 550.f);

        lista_ents.incluir(pl1);
        GC.incluirObstaculo(pl1);

        Plataforma* pl2 = new Plataforma();

        pl2->setPosicao(100.f, 200.f);

        lista_ents.incluir(pl2);
        GC.incluirObstaculo(pl2);

        Plataforma* pl3 = new Plataforma();

        pl3->setPosicao(300.f, 100.f);

        lista_ents.incluir(pl3);
        GC.incluirObstaculo(pl3);

        Plataforma* pl4 = new Plataforma();

        pl4->setPosicao(500.f, 600.f);

        lista_ents.incluir(pl4);
        GC.incluirObstaculo(pl4);
    }

    if (numPlat == 5)
    {
        Plataforma* pl1 = new Plataforma();

        pl1->setPosicao(200.f, 200);

        lista_ents.incluir(pl1);
        GC.incluirObstaculo(pl1);

        Plataforma* pl2 = new Plataforma();

        pl2->setPosicao(720.f, 550.f);

        lista_ents.incluir(pl2);
        GC.incluirObstaculo(pl2);

        Plataforma* pl3 = new Plataforma();

        pl3->setPosicao(300.f, 100.f);

        lista_ents.incluir(pl3);
        GC.incluirObstaculo(pl3);

        Plataforma* pl4 = new Plataforma();

        pl4->setPosicao(500.f, 600.f);

        lista_ents.incluir(pl4);
        GC.incluirObstaculo(pl4);

        Plataforma* pl5 = new Plataforma();

        pl5->setPosicao(800.f, 650.f);

        lista_ents.incluir(pl5);
        GC.incluirObstaculo(pl5);
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
