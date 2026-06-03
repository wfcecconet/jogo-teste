#pragma once
#include "Jogador.h"
#include "Plataforma.h"
#include "Lista.h"
#include "Inim_Facil.h"
#include "ListaEntidades.h"
#include <SFML/Graphics.hpp>

class Gerenciador_Colisoes;

class Fase
{
public:
	Fase();
	~Fase();
	virtual void executar();


protected:
	ListaEntidades lista_ents;
	Gerenciador_Colisoes GC;

	void criarInimFacil();
	void criarPlataformas();
	virtual void criarInimigos() = 0;
	virtual void criarObstaculo() = 0;
	void criarCenario();

};
