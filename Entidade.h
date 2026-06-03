#pragma once
#include <sstream>
#include "Ente.h"
#include<SFML/Graphics.hpp>


class Entidade : public Ente
{
protected:
	int x;
	int y;

	std::ostringstream buffer;

	void salvarDataBuffer();
	

public:
	Entidade();
	virtual ~Entidade();

	virtual void executar() = 0;

	virtual void salvar() = 0;

};

