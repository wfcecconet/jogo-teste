#pragma once
#include "Personagem.h"

class Inimigo;

class Jogador :
    public Personagem
{
protected:
    int pontos;
    
public:
    void colidir(Inimigo* pIn);

    Jogador();
    ~Jogador();
    
    void mover();
    virtual void executar();
    virtual void salvar();
};

