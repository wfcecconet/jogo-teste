#include "Personagem.h"

Personagem::Personagem() : gravidade(1250.f) //definindo o valor da gravidade
{
	num_vidas = 3;
	noChao = false;
	velY = 0.0;
}

Personagem::~Personagem()
{
}

