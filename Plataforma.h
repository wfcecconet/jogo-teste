#pragma once
#include "Obstaculo.h"

class Plataforma :
    public Obstaculo
{
private:
    float altura;
    float largura;
public:
    Plataforma();
    ~Plataforma();
    void salvar();
    void executar();
    void obstaculizar(Jogador* p);
};

