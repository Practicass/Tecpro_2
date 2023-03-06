/* ----------------------------------------------------------------------------
 * File:   push.h
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Practica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
#pragma once
#include "instruccion.h"
#include <stack>
using namespace std;

class Push : public Instruccion {
private:
    int c;
public:
    Push(int num);
    ~Push();
    
    string mostrar() const override;
    void comportamiento(stack<int>& pila, int& cont) const override;
};