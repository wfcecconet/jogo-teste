#include "Personagem.h"

Personagem::Personagem() : gravidade(1250.f)
{
	num_vidas = 3;
	noChao = false;
	velY = 0.f;
}

Personagem::~Personagem()
{
}

void Personagem::salvarDataBuffer()
{
}
