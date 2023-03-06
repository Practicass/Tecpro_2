/* ----------------------------------------------------------------------------
 * File:   Dup.java
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Practica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
public class Dup extends Instruccion{
    public Dup(){
        super("dup");
    }

    public void comportamiento(Programa.ProgramaInfo prog){
        Integer aux = prog.popP();
        prog.pushP(aux);
        prog.pushP(aux);
        prog.aumentar(1);
    }
}
