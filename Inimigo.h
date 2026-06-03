#pragma once
#include "Personagem.h"

class Jogador;

class Inimigo :
    public Personagem
{
private:
    

protected:
    int nivel_maldade;
    Jogador* pJog;
public:
    Inimigo();
    ~Inimigo();
    void salvarDataBuffer();
    virtual void executar() = 0;
    virtual void danificar(Jogador* p) = 0;
    void setJogador(Jogador* j) { pJog = j; }
    virtual void salvar() = 0;
    virtual void mover() = 0;

};

