import java.Dup;

// 
// Decompiled by Procyon v0.5.36
// 

class Factorial extends Programa
{
    Factorial() {
        this.info.cont = 0;
        this.info.fin = 14;
        (this.vInst = new Instruccion[(int)this.info.fin])[0] = (Instruccion)new Push(Integer.valueOf(1));
        this.vInst[1] = (Instruccion)new Read();
        this.vInst[2] = (Instruccion)new Swap();
        this.vInst[3] = (Instruccion)new Over();
        this.vInst[4] = (Instruccion)new Mul();
        this.vInst[5] = (Instruccion)new Swap();
        this.vInst[6] = (Instruccion)new Push(Integer.valueOf(-1));
        this.vInst[7] = new Add();
        this.vInst[8] = new Dup();
        this.vInst[9] = (Instruccion)new Push(Integer.valueOf(-2));
        this.vInst[10] = new Add();
        this.vInst[11] = (Instruccion)new Jumpif(2);
        this.vInst[12] = (Instruccion)new Swap();
        this.vInst[13] = (Instruccion)new Write();
    }
}
