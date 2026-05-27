#include "Personagem.h"

Personagem::Personagem() : gravidade(1250.f) //definindo o valor da gravidade
{
	noChao = false;
	velY = 0.0;
}

Personagem::~Personagem()
{
}

