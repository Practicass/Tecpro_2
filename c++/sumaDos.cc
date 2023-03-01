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
            
            cout<<"P"<<endl;
            vInst[0] = new Read();
            cout<<"e"<<endl;
            vInst[1] = new Read();
            cout<<"s"<<endl;
            vInst[2] = new Add();
            cout<<"a"<<endl;
            vInst[3] = new Write();
            cont = 4;
        }

