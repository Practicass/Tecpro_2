/* ----------------------------------------------------------------------------
 * File:   add.cc
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Practica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
import java.util.Stack;

public class Programa {
    protected Instruccion[] vInst;

    public class ProgramaInfo{
        protected Stack<Integer> pila;
        protected Integer cont;
        protected Integer fin;

        ProgramaInfo(){
            this.pila = new Stack<Integer>();
        }
        public Integer contP(){ return this.cont;}
        public Integer finP(){ return this.fin;}
        public Stack<Integer> pilaP(){ return this.pila;}
        public void aumentar(Integer num){ this.cont = this.cont + num;}
        public void setCont(Integer num){ this.cont = num;}
        public Integer popP(){ return this.pila.pop();}
        public Integer peekP(){ return this.pila.peek();}
        public void pushP(Integer num){ this.pila.push(num);}
    }

    protected Programa.ProgramaInfo info;
    
    public Programa(){
        this.info = new Programa.ProgramaInfo();
    }

    public void ejecutar(){
        System.out.println("Ejecucion: ");
        while (this.info.contP() < this.info.finP()){
            this.vInst[this.info.cont].comportamiento(this.info);
        }
    }

    public void listar(){
        System.out.println("Programa: ");
        
    }

}
