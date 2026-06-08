#pragma once
#include "Obstaculo.h"
#include "Jogador.h"    
class Plataforma :
    public Obstaculo
{
private:
   // sf::FloatRect altura; altura ainda não utilizada
public:
    Plataforma();
    ~Plataforma();
    void salvar();
    void executar();
    void obstaculizar(Jogador* p);
};

