#pragma once
class Gerenciador_Colisões
{
private:
	vector<Inimigo*> LIs;
	list<Obstaculo*> LOs;
	set<Projetil*> LPs;
	Jogador* pJog1;

	const bool verificarColisao(Entidade* pe1, Entidade* pe2);
	void tratarColisoesJogsObstacs();
	void tratarColisoesJogsInimgs();
	void tratarColisoesJogsProjeteis();
public:
	Gerenciador_Colisões();
	~Gerenciador_Colisões();
	void incluirInimigo(Inimigo* pi);
	void incluirObstaculo(Obstaculo* po);
	void incluirProjetil(Projetil* pj);
	void executar();

};

