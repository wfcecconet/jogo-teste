#include "Inim_Medio.h"
#include "Jogador.h"

Inim_Medio::Inim_Medio() : raio(200.f), veloc(30.f)
{
	nivel_maldade = 2;
	tamanho = 35;
	body.setSize(sf::Vector2f(25.f, 44.f));
	body.setFillColor(sf::Color::Magenta);

	if (textura.loadFromFile("Imagens/Sprites/zumbi_sprite.png")) {
		sprite.setTexture(textura);
		pFig = &sprite;
	}
	else {
		pFig = &body;
	}
}

Inim_Medio::~Inim_Medio()
{
}

void Inim_Medio::executar()
{
	velY += gravidade * deltaT;
	body.move(0.f, velY * deltaT);
	mover();
}

void Inim_Medio::salvar()
{
}

void Inim_Medio::mover()
{
	if (pJog == nullptr) return;

	sf::Vector2f posJog = pJog->getPosicao();
	sf::Vector2f posInim = getPosicao();

	float dist_x = posJog.x - posInim.x;
	float dist_y = posJog.y - posInim.y;
	float distancia = sqrt(dist_x * dist_x + dist_y * dist_y);

	if (distancia < raio) {
		if (dist_x > 0)
		{
			body.move(veloc * deltaT, 0.f);
			sprite.setScale(1.f, 1.f);
			sprite.setOrigin(0.f, 0.f);
		}
		else
		{
			body.move(-veloc * deltaT, 0.f);
			sprite.setScale(-1.f, 1.f);
			sprite.setOrigin(sprite.getLocalBounds().width, 0.f);
		}
	}
	sprite.setPosition(body.getPosition());
}

void Inim_Medio::danificar(Jogador* p)
{
	p->receberDano(nivel_maldade);
}
