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
        LEs.push(e);
    }

    Lista<Entidade>& getLista()
    {
        return LEs;
    }

    int getLen()
    {
        return LEs.getLen();
    }

    Entidade* getItem(int i)
    {
        return LEs.getItem(i);
    }
};