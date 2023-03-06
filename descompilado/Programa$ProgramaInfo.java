import java.util.Stack;

// 
// Decompiled by Procyon v0.5.36
// 

public class ProgramaInfo
{
    protected Stack<Integer> pila;
    protected Integer cont;
    protected Integer fin;
    
    ProgramaInfo() {
        this.pila = new Stack<Integer>();
    }
    
    public Integer contP() {
        return this.cont;
    }
    
    public Integer finP() {
        return this.fin;
    }
    
    public Stack<Integer> pilaP() {
        return this.pila;
    }
    
    public void aumentar(final int n) {
        this.cont += n;
    }
    
    public void setCont(final int i) {
        this.cont = i;
    }
    
    public Integer popP() {
        return this.pila.pop();
    }
    
    public Integer peek() {
        return this.pila.peek();
    }
    
    public void pushP(final int i) {
        this.pila.push(i);
    }
}
