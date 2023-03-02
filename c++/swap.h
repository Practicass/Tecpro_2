/* ----------------------------------------------------------------------------
 * File:   swap.h
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Práctica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
#include "instruccion.h"
#include <stack>


class Swap : public Instruccion {

public:
    Swap();
    
    void comportamiento(std::stack<int>& pila, int& cont) const override;
};