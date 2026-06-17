#include <cmath>
#include "Inim_Facil.h"
#include "Jogador.h"

Inim_Facil::Inim_Facil() : raio(300.f), veloc(50.f), tempAtaque(0.f)
{
	if (textura.loadFromFile("Imagens/Sprites/aranha_sprite.png")){
		sprite.setTexture(textura);
		pFig = &sprite;
	}
	else {
		pFig = &body;
	}


	limiteEsq = 200.f;
	limiteDir = 400.f;
	movendoDireita = true;
	body.setSize(sf::Vector2f(38.f, 20.f));
	body.setFillColor(sf::Color::Red);

}

Inim_Facil::~Inim_Facil()
{
	
}

void Inim_Facil::setLimites(float esq, float dir)
{
	limiteEsq = esq;
	limiteDir = dir;
}

void Inim_Facil::mover()
{

	sf::Vector2f pos = getPosicao();

	if (movendoDireita) {
		body.move(veloc * deltaT, 0.f);
		sprite.setScale(1.f, 1.f);
		sprite.setOrigin(0.f, 0.f);
		if (pos.x >= limiteDir)
			movendoDireita = false;
	}
	else {
		body.move(-veloc * deltaT, 0.f);
		sprite.setScale(-1.f, 1.f);
		sprite.setOrigin(sprite.getLocalBounds().width, 0.f);
		if (pos.x <= limiteEsq)
			movendoDireita = true;
	}

}

void Inim_Facil::danificar(Jogador* p)
{
	p->receberDano(1);
}

void Inim_Facil::executar()
{
	if (tempAtaque > 0.f)
		tempAtaque -= deltaT;

	velY += gravidade * deltaT;
	body.move(0.f, velY * deltaT);
	mover();

	sprite.setPosition(body.getPosition());

}

void Inim_Facil::salvar()
{
}

