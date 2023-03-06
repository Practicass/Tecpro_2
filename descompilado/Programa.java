// 
// Decompiled by Procyon v0.5.36
// 

class Programa
{
    protected Instruccion[] vInst;
    protected Programa.ProgramaInfo info;
    
    public Programa() {
        this.info = new Programa.ProgramaInfo(this);
    }
    
    public void ejecutar() {
        System.out.println("Ejecucuion: ");
        while (this.info.contP() < this.info.finP()) {
            this.vInst[this.info.cont].comportamiento(this.info);
        }
    }
    
    public void listar() {
        System.out.println("Programa: ");
        for (Integer n = 0; n < this.info.finP(); ++n) {
            System.out.println(invokedynamic(makeConcatWithConstants:(Ljava/lang/Integer;Ljava/lang/String;)Ljava/lang/String;, n, this.vInst[n].mostrar()));
        }
    }
}
