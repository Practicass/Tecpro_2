// 
// Decompiled by Procyon v0.5.36
// 

public class Mul extends Instruccion
{
    public Mul() {
        super("mul");
    }
    
    @Override
    public void comportamiento(final Programa.ProgramaInfo programaInfo) {
        programaInfo.pushP(programaInfo.popP() * programaInfo.popP());
        programaInfo.aumentar(1);
    }
}
