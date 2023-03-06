

// 
// Decompiled by Procyon v0.5.36
// 

public class Main
{
    public static void main(final String[] array) {
        final Programa[] array2 = new Programa[4];
        (array2[0] = (Programa)new SumaDos()).listar();
        array2[0].ejecutar();
        (array2[1] = new CuentaAtras()).listar();
        array2[1].ejecutar();
        (array2[2] = new Factorial()).listar();
        array2[2].ejecutar();
    }
}
