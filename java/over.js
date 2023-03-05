/* ----------------------------------------------------------------------------
 * File:   over.h
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Práctica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
// #include "instruccion.h"
// #include <stack>


// class Over : public Instruccion {

// public:
//     Over();
//     ~Over();
    
//     void comportamiento(std::stack<int>& pila, int& cont) const override;
// };

// Over::Over() : 
//         Instruccion("over") { 
            
//         }
// Over::~Over(){
    
// }

// void Over::comportamiento(stack<int>& pila, int& cont) const  { 
//     int a=pila.top();
//     pila.pop();
//     int b=pila.top();
//     pila.pop();
//     pila.push(b);
//     pila.push(a);
//     pila.push(b);
//     cont++;
// }  