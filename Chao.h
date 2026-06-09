#pragma once
#include "Entidade.h"
class Chao :
    public Entidade
{
private:
	sf::Color cor;
public:
	Chao();
	~Chao();
	void setCor(sf::Color c);
	void executar();
};

