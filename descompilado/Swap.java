// 
// Decompiled by Procyon v0.5.36
// 

public class Swap extends Instruccion
{
    public Swap() {
        super("swap");
    }
    
    @Override
    public void comportamiento(final Programa.ProgramaInfo programaInfo) {
        final Integer popP = programaInfo.popP();
        final Integer popP2 = programaInfo.popP();
        programaInfo.pushP(popP);
        programaInfo.pushP(popP2);
        programaInfo.aumentar(1);
    }
}
