 /* File:  programa.cc
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Práctica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
#include "programa.h"

Programa::Programa(){ }

void Programa::ejecutar(){
    cout<<"Ejecución:"<<endl;
    int j = 0;
    while(cont>0){
       vInst[j]->comportamiento(pila, cont);
       j++;
    }
}

void Programa::listar(){
    cout<<"Programa:"<<endl;
    for(int i = 0; i<cont;i++){
        cout<<i<<"  "<<vInst[i]->mostrar() << endl;
    }
}
