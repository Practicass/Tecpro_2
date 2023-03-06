/* ----------------------------------------------------------------------------
 * File:   Instruccion.java
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Practica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
public class Instruccion {
    protected String nombre;

    public Instruccion(String name){
        this.nombre = name;
    }
    public String mostrar(){
        return this.nombre;
    }
    public void comportamiento(Programa.ProgramaInfo prog){ }
}
