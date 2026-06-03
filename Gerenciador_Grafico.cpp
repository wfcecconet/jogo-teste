#include "Gerenciador_Grafico.h"
#include "Ente.h"

Gerenciador_Grafico::Gerenciador_Grafico(sf::RenderWindow& window):window(window)
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
	window.clear();
}

void Gerenciador_Grafico::mostrar()
{
	window.display();
}
const bool Gerenciador_Grafico::estaAberto() const
{
	return window.isOpen();
}

void Gerenciador_Grafico::fechar()
{
	window.close();
}

