/* ----------------------------------------------------------------------------
 * File:   Jumpif.java
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Practica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
public class Jumpif extends Instruccion {
    private Integer l;

    public Jumpif(Integer num){
        super("jumpif");
        this.l = num;
    }

    public String mostrar(){
        return this.nombre+" "+ String.valueOf(this.l);
    }

    public void comportamiento(Programa.ProgramaInfo prog){
        if(prog.popP() >= 0){
            prog.setCont(l);
        }else{
            prog.aumentar(1);
        }
    }
}
