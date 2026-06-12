#pragma once
#include "Obstaculo.h"
#include "Jogador.h"    
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
    float velocidade; 
    int indoCima;
	float getAltura() const { return altura; }
	float getLargura() const { return largura; }
};

