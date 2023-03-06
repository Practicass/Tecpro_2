// 
// Decompiled by Procyon v0.5.36
// 

class SumaDos extends Programa
{
    SumaDos() {
        this.info.cont = 0;
        this.info.fin = 4;
        (this.vInst = new Instruccion[(int)this.info.fin])[0] = new Read();
        this.vInst[1] = new Read();
        this.vInst[2] = new Add();
        this.vInst[3] = (Instruccion)new Write();
    }
}
