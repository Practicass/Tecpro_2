// 
// Decompiled by Procyon v0.5.36
// 

public class Over extends Instruccion
{
    public Over() {
        super("over");
    }
    
    @Override
    public void comportamiento(final Programa.ProgramaInfo programaInfo) {
        final Integer popP = programaInfo.popP();
        final Integer popP2 = programaInfo.popP();
        programaInfo.pushP((int)popP2);
        programaInfo.pushP((int)popP);
        programaInfo.pushP((int)popP2);
        programaInfo.aumentar(1);
    }
}
