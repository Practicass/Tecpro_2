/* ----------------------------------------------------------------------------
 * File:   jumpif.h
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Práctica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
// #include "instruccion.h"
// #include <stack>


// class Jumpif : public Instruccion {
// private:
//     int l;
// public:
//     Jumpif(int num);
//     ~Jumpif();
    
//     std::string mostrar() const override;
//     void comportamiento(std::stack<int>& pila, int& cont) const override;
// };

// Jumpif::Jumpif(int num) : 
//         Instruccion("jumpif") { 
//             l=num;
//         }

// Jumpif::~Jumpif(){
    
// }

// string Jumpif::mostrar() const{
//     return nombre+" "+to_string(l);
   
// }
// void Jumpif::comportamiento(stack<int>& pila, int& cont) const  { 
//     int aux=pila.top();
//     pila.pop();
//     if(aux>=0){
//         cont=l;
//     }else{
//         cont++;
//     }
// }   