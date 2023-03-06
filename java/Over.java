/* ----------------------------------------------------------------------------
 * File:   Over.java
 * Author: Pablo Angusto Delgado 842255 y Miguel Arejulajula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Practica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
public class Over extends Instruccion{
    public Over(){
        super("over");
    }

    public void comportamiento(Programa.ProgramaInfo prog){
        Integer a = prog.popP();
        Integer b = prog.popP();
        prog.pushP(b);
        prog.pushP(a);
        prog.pushP(b);
        prog.aumentar(1);

    }
}
