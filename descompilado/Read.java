import java.util.Scanner;

// 
// Decompiled by Procyon v0.5.36
// 

public class Read extends Instruccion
{
    public Read() {
        super("read");
    }
    
    @Override
    public void comportamiento(final Programa.ProgramaInfo programaInfo) {
        final Scanner scanner = new Scanner(System.in);
        System.out.print("?");
        System.out.flush();
        programaInfo.pushP(scanner.nextInt());
        programaInfo.aumentar(1);
    }
}
