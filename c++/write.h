/* ----------------------------------------------------------------------------
 * File:   write.h
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Práctica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
#include "instruccion.h"
#include <stack>


class Write : public Instruccion {

public:
    Write();
        
    void comportamiento(std::stack<int>& pila, int& cont) const override;
};