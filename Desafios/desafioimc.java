package Desafios;
import java.util.Scanner;

public class desafioimc {
    public static void main(String[]args) {
        try (Scanner input = new Scanner(System.in)) {

            System.out.print("Digite o seu peso: ");
            double peso = input.nextDouble();

            System.out.print("Digite a sua altura: ");
            double altura = input.nextDouble();


            double IMC = peso / (altura * altura);

            System.out.println("\n=====RESULTADO=====");
            System.out.printf("Seu IMC é: %.2f\n", IMC);

            if (IMC < 18.5) {
                System.out.println("Classificação: Abaixo do peso");
            }
             else if (IMC >= 18.5 && IMC <= 24.9) {
                System.out.println("Classificação: Peso normal");
            }
             else if (IMC >= 25.0 && IMC <= 29.9) {
                System.out.println("Classificação: Sobrepeso");
            }
             else {
                System.out.println("Classificação: Obesidade");
            }
        }
    }
}