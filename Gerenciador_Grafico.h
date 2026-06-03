#pragma once
#include <SFML/Graphics.hpp>

class Ente;//forward declaration para evitar dependência circular, pois Ente tem um ponteiro para Gerenciador_Grafico e vice-versa

class Gerenciador_Grafico
{
private:
	sf::RenderWindow& window; //nome mudade de obj para window, pois fazia mais sentido
public:
	Gerenciador_Grafico(sf::RenderWindow& window);
	~Gerenciador_Grafico();

	void desenharEnte(Ente* pE);

	void limpar();
	void mostrar();
	const bool estaAberto() const;
	void fechar();

};

