#pragma once
#include "Inimigo.h"
#include "Projetil.h"
#include "Obstaculo.h"
#include "Chao.h"
#include "Jogador.h"
#include <vector>
#include <set>
#include <list>
using namespace std;

class Gerenciador_Colisoes
{
private:
	vector<Inimigo*> LIs;
	list<Obstaculo*> LOs;
	set<Projetil*> LPs;
	Jogador* pJog1;
	Chao* pChao;

	const bool verificarColisao(Entidade* pe1, Entidade* pe2);
	void tratarColisoesJogsObstacs();
	void tratarColisoesJogsInimgs();
	void tratarColisoesInimgsObstacs();
	void tratarColisoesJogsChao();
	void tratarColisoesInimgsChao();
	//void tratarColisoesJogsProjeteis(); CRIAR PROJETIL
public:
	Gerenciador_Colisoes();
	~Gerenciador_Colisoes();
	void incluirInimigo(Inimigo* pi);
	void incluirObstaculo(Obstaculo* po);
	void incluirProjetil(Projetil* pp);
	void incluirJogador(Jogador* pj); //função que nao está no UML, mas é necessária para o funcionamento do gerenciador de colisoes
	void incluirChao(Chao* pc);
	void executar();

};

