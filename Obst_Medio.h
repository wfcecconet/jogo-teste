#pragma once
#include "Obstaculo.h"
class Obst_Medio :
    public Obstaculo
{
private:
    float largura;
public:
    Obst_Medio();
    ~Obst_Medio();
    void executar();
    void salvar();
	void obstaculizar(Jogador* p);
};

