/* ----------------------------------------------------------------------------
 * File:   CuentaAtras.java
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Practica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
 public class CuentaAtras extends Programa {
    public CuentaAtras(){
        info.cont = 0;
        info.fin = 7;
        vInst = new Instruccion[info.fin];
        vInst[0] = new Read()
        vInst[0] = new Dup()
        vInst[0] = new Write()
        vInst[0] = new Push(-1)
        vInst[0] = new Add()
        vInst[0] = new Dup()
        vInst[0] = new Jumpif(1)
    }
    
}
