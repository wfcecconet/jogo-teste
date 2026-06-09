#pragma once
#include <SFML/Graphics.hpp>

class Ente;//forward declaration para evitar dependência circular, pois Ente tem um ponteiro para Gerenciador_Grafico e vice-versa

class Gerenciador_Grafico
{
private:
	static Gerenciador_Grafico* instancia; //padrão de desing singleton
	sf::RenderWindow window; //nome mudade de obj para window, pois fazia mais sentido
	sf::View view; //a camera do jogo, que vai seguir o jogador

	Gerenciador_Grafico(); //construtor privado para forçar o uso do singleton
public:
	static Gerenciador_Grafico* getInstancia();
	~Gerenciador_Grafico();

	void desenharEnte(Ente* pE);
	void moverView(sf::Vector2f pos);//move a camera para seguir o jogador
	void limpar();
	void mostrar();
	const bool estaAberto() const;
	void fechar();
	sf::RenderWindow* getWindow()
	{
		return &window;
	}

};

