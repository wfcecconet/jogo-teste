#pragma once
#include "Jogador.h"
#include "Plataforma.h"
#include "Inim_Facil.h"
#include "ListaEntidades.h"
#include "Gerenciador_Colisoes.h"
#include <SFML/Graphics.hpp>


class Fase
{
protected:
	ListaEntidades lista_ents;
	Gerenciador_Colisoes GC;
	void criarInimFaceis();
	void criarPlataformas();
	virtual void criarObstaculo()=0;
	virtual void criarInimigos() = 0;
	void criarCenario();
public:
	Fase();
	~Fase();
	virtual void executar();

};
