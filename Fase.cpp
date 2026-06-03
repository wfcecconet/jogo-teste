#include "Fase.h"

void Fase::criarInimFaceis()
{
    void Fase::criarInimFaceis()
    {
        for (int i = 0; i < 5; i++)
        {
            Inim_Facil* inim = new Inim_Facil();

            inim->setWindow(pGG->getWindow());

            inim->setPosicao(
                200.f + i * 180.f,
                300.f
            );

            lista_ents.incluir(inim);
        }
    }
}

void Fase::criarPlataformas()
{
}

void Fase::criarCenario()
{
}

Fase::Fase(Jogador* j1)
{
    lista_ents.incluir(j1);

    criarCenario();
    criarPlataformas();
    criarInimFaceis();
}

Fase::~Fase()
{
}

void Fase::executar()
{
    criarCenario();
    criarPlataformas();
    criarInimFaceis();
}
