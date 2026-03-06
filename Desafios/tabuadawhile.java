package Desafios;
import java.util.Scanner;

public class tabuadawhile {
    public static void main(String[] args) {
        int n = 0;

        try (Scanner input = new Scanner(System.in)) {
            System.out.println("=====TABUADA=====");
            System.out.print("Digite um número: ");
            int i = input.nextInt();

            System.out.println("\n=====TABUADA DO NÚMERO " + i + " =====");
            
         while (n <= 10) {
            int resultado = i * n;

            System.out.println(i + " x " + n + " = " + resultado);
            n++;
        }
        }
    }
}
