/* ----------------------------------------------------------------------------
 * File:   Mul.java
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Practica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
public class Mul extends Instruccion {
    public Mul(){
        super("mul");
    }

    public void comportamiento(Programa.ProgramaInfo prog){
        prog.pushP(prog.popP()*prog.popP());
        prog.aumentar(1);
    }
}
