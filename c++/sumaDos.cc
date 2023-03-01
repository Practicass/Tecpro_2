/* ----------------------------------------------------------------------------
 * File:   sumaDos.cc
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Práctica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
#include "sumaDos.h"


SumaDos::SumaDos() : Programa(){
            vInst[0] = new Read("read");
            vInst[1] = new Read("read");
            vInst[2] = new Add();
            vInst[3] = new Write("write");
            cont = 4;
        }

