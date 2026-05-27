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
	Fase(Jogador* j1, sf::RenderWindow* window);
	~Fase();
	
	//MÉTODOS DO DIAGRAMA A SEREM IMPLEMENTADOS
	virtual void executar();


	ListaEntidades* getListaEntidades() { return listaEntidades; }

	void verificaColisoes(); //não pertence a esta classe

protected:
	Gerenciador_Colisoes GC; //ATRIBUTO DO DIAGRAMA A SER IMPLEMENTADO

	//MÉTODOS DO DIAGRAMA A SEREM IMPLEMENTADOS
	void criarInimFacil();
	void criarPlataformas();
	virtual void criarInimigos() = 0;
	virtual void criarObstaculo() = 0;
	void criarCenario();



private:
	ListaEntidades *listaEntidades; //ATRIBUTO DO DIAGRAMA

	//VERIFICAR SE É NECESSÁRIO OS ATRIBUTOS ABAIXO
	Inim_Facil* i1;
	Jogador* j1;
	Lista<Plataforma>* pF;
	Lista<Personagem>* pP;
	sf::RenderWindow* window;

	void inicializaElementos();
};
