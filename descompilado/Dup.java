// 
// Decompiled by Procyon v0.5.36
// 

public class Dup extends Instruccion
{
    public Dup() {
        super("dup");
    }
    
    public void comportamiento(final Programa.ProgramaInfo programaInfo) {
        final Integer popP = programaInfo.popP();
        programaInfo.pushP((int)popP);
        programaInfo.pushP((int)popP);
        programaInfo.aumentar(1);
    }
}
