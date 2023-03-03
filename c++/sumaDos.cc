/* ----------------------------------------------------------------------------
 * File:   sumaDos.cc
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Práctica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
#include "sumaDos.h"
using namespace std;


SumaDos::SumaDos() : Programa(){
            fin=4;
            vInst = new Instruccion*[fin];
            vInst[0]= new Read();
            vInst[1] = new Read();
            vInst[2] = new Add();
            vInst[3] = new Write();
            
        }
SumaDos::~SumaDos(){
    for (int i = 0; i < fin; i++)
    {
        delete vInst[i];
    }
    
}
