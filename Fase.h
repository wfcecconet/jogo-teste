#pragma once
#include "Ente.h"
#include "Jogador.h"
#include "Plataforma.h"
#include "Obst_Medio.h"
#include "Chao.h"
#include "Inim_Facil.h"
#include "ListaEntidades.h"
#include "Gerenciador_Colisoes.h"
#include "SFML/Graphics.hpp"


class Fase : public Ente
{
protected:
	Jogador* pJog;
	ListaEntidades lista_ents;
	Gerenciador_Colisoes GC;

	void criarInimFaceis();
	void criarPlataformas();
	virtual void criarObstaculo() = 0;
	virtual void criarInimigos() = 0;
	virtual void criarChao() = 0;
	void criarCenario();

public:
	Fase();//tirei o parametro de jogador, pois não está no UML
	~Fase();
	void incluirJogador(Jogador* j);
	virtual void executar();
	ListaEntidades* getListaEntidades(){return &lista_ents;}
};
