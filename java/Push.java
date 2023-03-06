/* ----------------------------------------------------------------------------
 * File:   Push.java
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Practica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
public class Push extends Instruccion{
    private Integer c;

    public Push(Integer num){
        super("Push");
        c = num;
    }

    public String mostrar(){
        return this.nombre + " " + String.valueOf(this.c);
    }

    public void comportamiento(Programa.ProgramaInfo prog){
        prog.pushP(this.c);
        prog.aumentar(1);
    }
}
