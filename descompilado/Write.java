// 
// Decompiled by Procyon v0.5.36
// 

public class Write extends Instruccion
{
    public Write() {
        super("write");
    }
    
    @Override
    public void comportamiento(final Programa.ProgramaInfo programaInfo) {
        System.out.println(programaInfo.popP());
        programaInfo.aumentar(1);
    }
}
