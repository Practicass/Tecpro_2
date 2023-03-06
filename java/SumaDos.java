/* ----------------------------------------------------------------------------
 * File:   SumaDos.java
 * Author: Pablo Angusto Delgado 842255 y Miguel Arejulajula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Practica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
public class SumaDos extends Programa {
    public SumaDos(){
        info.cont = 0;
        info.fin = 4;
        vInst = new Instruccion[info.fin];
        vInst[0]= new Read();
        vInst[1] = new Read();
        vInst[2] = new Add();
        vInst[3] = new Write();
            

    }
}
