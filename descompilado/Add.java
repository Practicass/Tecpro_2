// 
// Decompiled by Procyon v0.5.36
// 

public class Add extends Instruccion
{
    public Add() {
        super("add");
    }
    
    public void comportamiento(final Programa.ProgramaInfo programaInfo) {
        programaInfo.pushP(programaInfo.popP() + programaInfo.popP());
        programaInfo.aumentar(1);
    }
}
