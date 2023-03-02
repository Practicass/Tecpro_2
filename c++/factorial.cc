/* ----------------------------------------------------------------------------
 * File:   factorial.cc
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Práctica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
#include "factorial.h"


Factorial::Factorial() : Programa(){
            fin=14;
            vInst = new Instruccion*[fin];
            vInst[0]= new Push(1);
            vInst[1] = new Read();
            vInst[2] = new Swap();
            vInst[3] = new Over();
            vInst[4] = new Mul();
            vInst[5] = new Swap();
            vInst[6] = new Push(-1);
            vInst[7] = new Add();
            vInst[8] = new Dup();
            vInst[9] = new Push(-2);
            vInst[10] = new Add();
            vInst[11] = new Jumpif(2);
            vInst[12] = new Swap();
            vInst[13] = new Write();
            cont=0;
        }