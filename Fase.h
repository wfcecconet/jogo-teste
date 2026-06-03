#pragma once
#include "Ente.h"
#include "Jogador.h"
#include "Plataforma.h"
#include "Inim_Facil.h"
#include "ListaEntidades.h"
#include "Gerenciador_Colisoes.h"
#include <SFML/Graphics.hpp>


class Fase : public Ente
{
protected:
	ListaEntidades lista_ents;
	Gerenciador_Colisoes GC;

	void criarInimFaceis();
	void criarPlataformas();
	virtual void criarObstaculo() = 0;
	virtual void criarInimigos() = 0;
	void criarCenario();

public:
	Fase(Jogador* j1);
	~Fase();
	virtual void executar();

};
