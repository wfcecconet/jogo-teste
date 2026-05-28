#pragma once
#include "Entidade.h"
class Projetil :
    public Entidade
{
private:
	bool ativo;
public:
	Projetil();
	~Projetil();
	void executar();
	void salvar();
};

