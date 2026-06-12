#pragma once
#include "Personagem.h"

class Inimigo;

class Jogador : public Personagem
{
protected:
    int pontos;
    int num_vidas;
    float invulnerabilidade;

public:
    Jogador();
    ~Jogador();
    
    void colidir(Inimigo* pIn);
    void receberDano(int dano);

    void mover();
    void executar();
    //virtual void salvar();
};

