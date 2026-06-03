#pragma once
#include "Lista.h"
#include "Entidade.h"
class ListaEntidades
{
private:
    Lista<Entidade> LEs;

public:
    void incluir(Entidade* e)
    {
        LEs.incluir(e);
    }

    Lista<Entidade>& getLista()
    {
        return LEs;
    }
};