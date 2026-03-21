package Desafios;
import java.util.Scanner;

public class tabuada {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {

            System.out.println("=====TABUADA=====");
            System.out.print("Escolha um número: ");
            int i = input.nextInt();

            System.out.println("\n=====TABUADA DO NÚMERO " + i + "=====");
            for (int n = 0; n <= 10; n++) {
                int resultado = i * n;
                
                System.out.println(i + " x " + n + " = " + resultado);
            }
        }
    }
}