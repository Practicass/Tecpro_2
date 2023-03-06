/* ----------------------------------------------------------------------------
 * File:   Swap.java
 * Author: Pablo Angusto Delgado 842255 y Miguel Arejulajula Aisa 850068
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
        Integer a = prog.popP();
        Integer b = prog.popP();
        prog.pushP(a);
        prog.pushP(b);
        prog.aumentar(1);
    }
}
