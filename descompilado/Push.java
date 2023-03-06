// 
// Decompiled by Procyon v0.5.36
// 

public class Push extends Instruccion
{
    private Integer c;
    
    public Push(final Integer c) {
        super("push");
        this.c = c;
    }
    
    @Override
    public String mostrar() {
        return invokedynamic(makeConcatWithConstants:(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;, this.nombre, String.valueOf(this.c));
    }
    
    @Override
    public void comportamiento(final Programa.ProgramaInfo programaInfo) {
        programaInfo.pushP(this.c);
        programaInfo.aumentar(1);
    }
}
