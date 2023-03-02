/* ----------------------------------------------------------------------------
 * File:   dup.h
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Práctica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
#include "instruccion.h"
#include <stack>
using namespace std;

class Dup : public Instruccion {

public:
    Dup();
    
    void comportamiento(stack<int>& pila, int& cont) const override;
};