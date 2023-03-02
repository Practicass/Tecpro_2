/* ----------------------------------------------------------------------------
 * File:   cuentaAtras.cc
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Práctica 2 de Tecpro 
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