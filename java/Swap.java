/* ----------------------------------------------------------------------------
 * File:   Swap.java
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Practica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
public class Swap extends Instruccion{
    public Swap() {
        super("swap");
    }

    public void comportamiento(Programa.ProgramaInfo prog){
        Integrer a = prog.popP();
        Integrer b = prog.popP();
        prog.pushP(b);
        prog.pushP(a);
        prog.aumentar(1);
    }
}
