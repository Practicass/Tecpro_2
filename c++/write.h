/* ----------------------------------------------------------------------------
 * File:   write.h
 * Author: Pablo Angusto Delgado 842255 y Miguel Arejulajula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Practica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
#pragma once
#include "instruccion.h"
#include <stack>


class Write : public Instruccion {

public:
    Write();
    ~Write();
        
    void comportamiento(std::stack<int>& pila, int& cont) const override;
};