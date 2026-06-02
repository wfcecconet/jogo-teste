#pragma once
#include "Obstaculo.h"
#include "Jogador.h"    
class Plataforma :
    public Obstaculo
{
private:
    int altura;
public:
    Plataforma();
    ~Plataforma();
    void executar();
    void obstaculizar(Jogador* p);
};

