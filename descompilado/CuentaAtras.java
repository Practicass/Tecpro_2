
// 
// Decompiled by Procyon v0.5.36
// 

class CuentaAtras extends Programa
{
    CuentaAtras() {
        this.info.cont = 0;
        this.info.fin = 7;
        (this.vInst = new Instruccion[(int)this.info.fin])[0] = (Instruccion)new Read();
        this.vInst[1] = (Instruccion)new Dup();
        this.vInst[2] = (Instruccion)new Write();
        this.vInst[3] = (Instruccion)new Push(Integer.valueOf(-1));
        this.vInst[4] = new Add();
        this.vInst[5] = (Instruccion)new Dup();
        this.vInst[6] = (Instruccion)new Jumpif(1);
    }
}
