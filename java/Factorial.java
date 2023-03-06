/* ----------------------------------------------------------------------------
 * File:   Factorial.java
 * Author: Pablo Angusto Delgado 842255 y Miguel Arejulajula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Practica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */

public class Factorial extends Programa {
    public Factorial(){
        info.fin=14;
        info.cont=0;
        vInst = new Instruccion[info.fin];
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
        
    }
}
