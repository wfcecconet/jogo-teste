#include "Gerenciador_Grafico.h"
#include "Ente.h"

Gerenciador_Grafico::Gerenciador_Grafico(sf::RenderWindow& window):obj(window)
{
}

Gerenciador_Grafico::~Gerenciador_Grafico()
{
}

void Gerenciador_Grafico::desenharEnte(Ente* pE)
{
	pE->desenhar();
}

void Gerenciador_Grafico::limpar()
{
	obj.clear();
}

void Gerenciador_Grafico::mostrar()
{
	obj.display();
}
const bool Gerenciador_Grafico::estaAberto() const
{
	return obj.isOpen();
}

void Gerenciador_Grafico::fechar()
{
	obj.close();
}

