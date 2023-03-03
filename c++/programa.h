/* ----------------------------------------------------------------------------
 * File:   instruccion.h
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Práctica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
#pragma once
#include <stack>
#include "instruccion.h"


class Programa{
protected:
    Instruccion** vInst;
    int fin;
    int cont;
    std::stack<int> pila;

public:
    //Constructores
    Programa();
    ~Programa();
    virtual void ejecutar();
    virtual void listar();
};