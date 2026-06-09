#include "Fase.h"

void Fase::criarInimFaceis()
{
    for (int i = 0; i < 5; i++)
    {
        Inim_Facil* inim = new Inim_Facil();

        

        inim->setPosicao(200.f + i * 180.f, 300.);
        lista_ents.incluir(inim);
        GC.incluirInimigo(inim);
        //inim->setJogador(pJog); isso aqui passou para incluirJogador
    }
}
void Fase::criarPlataformas()
{
    Plataforma* pl1 = new Plataforma();

    
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
    pJog = j;
    
	lista_ents.incluir(j);
	GC.incluirJogador(j);
    GC.setJogadorInimigos();
}

Fase::Fase(Jogador* j1)
{
    pJog = j1;
    criarCenario();
}

Fase::~Fase()
{
}

void Fase::executar()
{
	GC.executar();
}
