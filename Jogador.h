#pragma once
#include "Personagem.h"

class Inimigo;

class Jogador : public Personagem
{
protected:
    int pontos;
    int num_vidas;

public:
    Jogador();
    ~Jogador();

    void colidir(Inimigo* pIn);

    void mover();
    virtual void executar();
    //virtual void salvar();
};

