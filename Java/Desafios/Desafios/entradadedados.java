package Desafios;
import java.util.Scanner;

public class entradadedados {
    public static void main(String[]args) {
        try (Scanner input = new Scanner(System.in)) {
            
            System.out.print("Digite o seu nome: ");
            String nome = input.nextLine();

            System.out.print("Digite a sua idade: ");
            int idade = input.nextInt();

            System.out.print("Digite a sua altura: ");
            double altura = input.nextDouble();

            System.out.print("Você gosta de programar? (true/false) ");
            boolean programar = input.nextBoolean();


            System.out.println("\n=====RESULTADO=====");
            System.out.println("Nome: " + nome);
            System.out.println("Idade: " + idade);
            System.out.printf("Altura: %.2f\n", altura);
            System.out.println("Gosta de programar: " + programar);
        }
    }
}