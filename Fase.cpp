#include "Fase.h"

void Fase::criarInimFaceis()
{
    for (int i = 0; i < 5; i++)
    {
        Inim_Facil* inim = new Inim_Facil();

        inim->setWindow(pGG->getWindow());

        inim->setPosicao(200.f + i * 180.f, 300.);
        lista_ents.incluir(inim);
        GC.incluirInimigo(inim);
    }
}
void Fase::criarPlataformas()
{
    Plataforma* pl1 = new Plataforma();

    pl1->setWindow(pGG->getWindow());
    pl1->setPosicao(300.f, 450.f);
    pl1->setTamanho(420.f, 70.f);

    lista_ents.incluir(pl1);
    GC.incluirObstaculo(pl1);
}


void Fase::criarCenario()
{
}

void Fase::incluirJogador(Jogador* j)
{
	lista_ents.incluir(j);
	GC.incluirJogador(j);
}

Fase::Fase()
{
    criarCenario();
}

Fase::~Fase()
{
}

void Fase::executar()
{
	GC.executar();
}
