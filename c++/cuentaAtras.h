/* ----------------------------------------------------------------------------
 * File:   cuentaAtras.h
 * Author: Pablo Angusto Delgado 842255 y Miguel Arejulajula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Practica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
#pragma once

#include "programa.h"
#include "instruccion.h"
#include "read.h"
#include "add.h"
#include "write.h"
#include "push.h"
#include "dup.h"
#include "jumpif.h"

class CuentaAtras : public Programa {
    
    public:
        //Constructor
        CuentaAtras();
        //Deconstructor
        ~CuentaAtras();
};
