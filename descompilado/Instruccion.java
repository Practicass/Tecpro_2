// 
// Decompiled by Procyon v0.5.36
// 

class Instruccion
{
    protected String nombre;
    
    public Instruccion(final String nombre) {
        this.nombre = nombre;
    }
    
    public String mostrar() {
        return this.nombre;
    }
    
    public void comportamiento(final Programa.ProgramaInfo prog) {
    }
}
