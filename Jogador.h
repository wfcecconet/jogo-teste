#pragma once
#include "Personagem.h"

class Inimigo;

class Jogador :
    public Personagem
{
protected:
    int pontos;
    bool noChao;
public:
    void colidir(Inimigo* pIn);

    Jogador();
    ~Jogador();
    void setNoChao(bool chao) { noChao = chao; }
    void mover();
    virtual void executar();
    virtual void salvar();
};

