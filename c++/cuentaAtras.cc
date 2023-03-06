/* ----------------------------------------------------------------------------
 * File:   cuentaAtras.cc
 * Author: Pablo Angusto Delgado 842255 y Miguel Arejulajula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Practica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
#include "cuentaAtras.h"


CuentaAtras::CuentaAtras() : Programa(){
            fin=7;
            vInst = new Instruccion*[fin];
            vInst[0]= new Read();
            vInst[1] = new Dup();
            vInst[2] = new Write();
            vInst[3] = new Push(-1);
            vInst[4] = new Add();
            vInst[5] = new Dup();
            vInst[6] = new Jumpif(1);
            cont=0;
}

CuentaAtras::~CuentaAtras(){
   for (int i = 0; i < fin; i++)
    {
        delete vInst[i];
    }
    
}

    