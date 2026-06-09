#include "Gerenciador_Colisoes.h"
#include <iostream>

Gerenciador_Colisoes::Gerenciador_Colisoes()
{
	pJog1 = nullptr;
}

Gerenciador_Colisoes::~Gerenciador_Colisoes()
{
}

void Gerenciador_Colisoes::incluirInimigo(Inimigo* pi)
{
	LIs.push_back(pi);
}

void Gerenciador_Colisoes::incluirObstaculo(Obstaculo* po)
{
	LOs.push_back(po);
}

void Gerenciador_Colisoes::incluirProjetil(Projetil* pp)
{
	LPs.insert(pp);
}

void Gerenciador_Colisoes::incluirJogador(Jogador* pj)
{
	pJog1 = pj;
}


void Gerenciador_Colisoes::incluirChao(Chao* pc)
{
    pChao = pc;
}

void Gerenciador_Colisoes::setJogadorInimigos()
{
    for (Inimigo* inim : LIs)
        inim->setJogador(pJog1);
}

void Gerenciador_Colisoes::executar()
{
  
	tratarColisoesJogsObstacs();
	tratarColisoesJogsInimgs();
	tratarColisoesInimgsObstacs();
	tratarColisoesJogsChao();
	tratarColisoesInimgsChao();
	//tratarColisoesJogsProjeteis();
}

const bool Gerenciador_Colisoes::verificarColisao(Entidade* pe1, Entidade* pe2)
{
    if (!pe1)
    {
        std::cout << "pe1 nulo\n";
        return false;
    }

    if (!pe2)
    {
        std::cout << "pe2 nulo\n";
        return false;
    }
	sf::FloatRect pe1Bounds = pe1->getBounds();
	sf::FloatRect pe2Bounds = pe2->getBounds();
	return (pe1Bounds.intersects(pe2Bounds));
}

void Gerenciador_Colisoes::tratarColisoesJogsObstacs()
{
    for (Obstaculo* obst : LOs)
    {
        if (verificarColisao(pJog1, obst) && pJog1->getVelY() > 0.f)
        {
            obst->obstaculizar(pJog1);
        }
    }
}

void Gerenciador_Colisoes::tratarColisoesJogsInimgs()
{
    for (unsigned int i=0;i<LIs.size();i++)
    {
        if (verificarColisao(pJog1, LIs[i]))
        {
			pJog1->colidir(LIs[i]); //ai na funcao colidir do jogador tem que chamar a funcao danificar do inimigo, e na funcao danificar do inimigo tem que chamar a funcao receberDano do jogador, e na funcao receberDano do jogador tem que diminuir o numero de vidas do jogador
        }
    }
}

void Gerenciador_Colisoes::tratarColisoesInimgsObstacs()
{
    for (unsigned int i = 0;i < LIs.size();i++)
    {
        for (Obstaculo* obst : LOs)
        {
            if (verificarColisao(LIs[i], obst))
            {

                sf::FloatRect pBounds = obst->getBounds();
                sf::FloatRect iBounds = LIs[i]->getBounds();

                LIs[i]->setVelY(0.f);

                LIs[i]->setPosicao(iBounds.left,pBounds.top - iBounds.height);
                
            }
        }
    }
}

void Gerenciador_Colisoes::tratarColisoesJogsChao()
{
	if (verificarColisao(pJog1, pChao) && pJog1->getVelY() > 0.f) //adicionada condição para jogador pular
	{
		sf::FloatRect chaoBounds = pChao->getBounds();
		sf::FloatRect jogBounds = pJog1->getBounds();
		pJog1->setNoChao(true);
		pJog1->setVelY(0.f);
		pJog1->setPosicao(jogBounds.left, chaoBounds.top - jogBounds.height);
	}
}

void Gerenciador_Colisoes::tratarColisoesInimgsChao()
{
    for (unsigned int i = 0;i < LIs.size();i++)
    {
		if (verificarColisao(LIs[i], pChao))
		{
			sf::FloatRect chaoBounds = pChao->getBounds();
			sf::FloatRect iBounds = LIs[i]->getBounds();
			LIs[i]->setVelY(0.f);
			LIs[i]->setPosicao(iBounds.left, chaoBounds.top - iBounds.height);
		}
    }
}


/*void Gerenciador_Colisoes::tratarColisoesJogsProjeteis()
{
    for (set<Projetil*>::iterator it=LPs.begin();it!=LPs.end();it++)
    {
        if (verificarColisao(pJog1, *it))
        {
            pJog1->receberDano();
        }
    }
}*/
