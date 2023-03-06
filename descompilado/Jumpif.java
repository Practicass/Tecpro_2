// 
// Decompiled by Procyon v0.5.36
// 

public class Jumpif extends Instruccion
{
    private Integer l;
    
    public Jumpif(final int i) {
        super("jumpif");
        this.l = i;
    }
    
    @Override
    public String mostrar() {
        return invokedynamic(makeConcatWithConstants:(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;, this.nombre, String.valueOf(this.l));
    }
    
    @Override
    public void comportamiento(final Programa.ProgramaInfo programaInfo) {
        if (programaInfo.popP() >= 0) {
            programaInfo.setCont((int)this.l);
        }
        else {
            programaInfo.aumentar(1);
        }
    }
}
