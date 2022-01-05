#include "pch.h"
#include "Operaciones.h"

Operaciones::Operaciones(void)
{
}

int Operaciones::contar()
{
    Pila aux = thisPila();
    int cont = 0;
    
    while (!aux.vacia())
    {
        Nodo n;
        aux.eliminar(n);
        cont++;
    }

    return cont;
}

void Operaciones::ordenar()
{
    Pila aux;
    while (!vacia())
    {
        Nodo orig;
        eliminar(orig);
        int cod = orig.getDato();

        Nodo tmp;
        aux.eliminar(tmp);
        int codAux = tmp.getDato();
        aux.insertar(tmp);

        while (!aux.vacia() && codAux < cod)
        {
            Nodo p;
            aux.eliminar(p);
            insertar(p);
        }
        aux.insertar(orig);
    }
    aux.eliminar(Nodo());
    thisPila(aux);
}

bool Operaciones::existe(Nodo n)
{
    Pila aux = thisPila();
    while (!aux.vacia())
    {
        Nodo tmp;
        aux.eliminar(tmp);
        
        int dato = tmp.getDato();

        if (dato == n.getDato())
            return true;
    }

    return false;
}

Operaciones Operaciones::invertida()
{
    Operaciones res;
    Pila aux = thisPila();
    while (!aux.vacia())
    {
        Nodo tmp;
        aux.eliminar(tmp);
        res.insertar(tmp);
    }

    return res;
}

