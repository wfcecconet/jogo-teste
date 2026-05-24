#pragma once
#include "Jogador.h"
#include "Inim_Facil.h"
#include "ListaEntidades.h"
#include <SFML/Graphics.hpp>


class Fase
{
public:
	Fase(Jogador* j1, sf::RenderWindow* window);
	~Fase();

	ListaEntidades* getListaEntidades() { return listaEntidades; }

private:
	ListaEntidades *listaEntidades;
	Inim_Facil* i1;
	Jogador* j1;
	sf::RenderWindow* window;

	void inicializaElementos();
};
