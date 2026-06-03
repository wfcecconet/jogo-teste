#include "Fase.h"

void Fase::criarInimFaceis()
{
    for (int i = 0; i < 5; i++)
    {
        Inim_Facil* inim = new Inim_Facil();

        inim->setWindow(pGG->getWindow());

        inim->setPosicao(200.f + i * 180.f, 300.);
        GC.incluirInimigo(inim);
        lista_ents.incluir(inim);
    }
}
void Fase::criarPlataformas()
{
    Plataforma* chao = new Plataforma();

    chao->setPosicao(0.f, 650.f);
    chao->setTamanho(1280.f, 70.f);

    lista_ents.incluir(chao);
}

void Fase::criarCenario()
{
}

Fase::Fase()
{
    criarCenario();
    criarPlataformas();
    criarInimFaceis();
}

Fase::~Fase()
{
}

void Fase::executar()
{
}
