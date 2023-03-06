/* ----------------------------------------------------------------------------
 * File:   Read.java
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Practica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
public class Write extends Instruccion {
    public Write(){
        super("write");
    }

    public void comportamiento(Programa.ProgramaInfo prog){
        System.out.println(prog.popP());
        prog.aumentar(1);
    }
}
