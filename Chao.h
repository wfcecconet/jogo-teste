#pragma once
#include "Entidade.h"
class Chao :
    public Entidade
{
private:
	sf::Color cor;
	float altura;
public:
	Chao();
	~Chao();
	void setCor(sf::Color c);
	void executar();
	float getAltura() const { return altura; }
};

