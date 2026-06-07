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
        //inim->setJogador(pJog); isso aqui passou para incluirJogador
    }
}
void Fase::criarPlataformas()
{
    Plataforma* chao = new Plataforma();

    chao->setWindow(pGG->getWindow());
    chao->setPosicao(0.f, 650.f);
    chao->setTamanho(1280.f, 70.f);

    lista_ents.incluir(chao);
    GC.incluirObstaculo(chao);
}

void Fase::criarCenario()
{
}

void Fase::incluirJogador(Jogador* j)
{
    pJog = j;
    j->setWindow(pGG->getWindow());
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
