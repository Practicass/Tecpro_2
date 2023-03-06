/* ----------------------------------------------------------------------------
 * File:   Read.java
 * Author: Pablo Angusto Delgado 842255 y Miguel Arejulajula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Practica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */

 import java.util.Scanner;

public class Read extends Instruccion {
    public Read(){
        super("read");
    }

    public void comportamiento(Programa.ProgramaInfo prog){
        Scanner scanner = new Scanner(System.in);
        System.out.print("?");
        System.out.flush();
        prog.pushP(scanner.nextInt());
        prog.aumentar(1);
    }
}
