/* ----------------------------------------------------------------------------
 * File:   instruccion.h
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Práctica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
// #pragma once
// #include <stack>
// #include "instruccion.h"


// class Programa{
// protected:
//     Instruccion** vInst;
//     int fin;
//     int cont;
//     std::stack<int> pila;

// public:
//     //Constructores
//     Programa();
//     ~Programa();
//     virtual void ejecutar();
//     virtual void listar();
// };

// Programa::Programa(){ }

// Programa::~Programa(){
    
//     delete[] vInst;
// }

// void Programa::ejecutar(){
//     cout<<"Ejecución:"<<endl;
//     int j = 0;
//     while(cont<fin){
//        vInst[cont]->comportamiento(pila, cont);
       
//     }
// }

// void Programa::listar(){
//     cout<<"Programa:"<<endl;
//     for(int i = 0; i<fin;i++){
//         cout<<i<<"  "<<vInst[i]->mostrar() << endl;
//     }
// }
