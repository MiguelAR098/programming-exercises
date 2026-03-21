package Exemplos;
import java.util.Scanner;

public class menu {
    public static void main(String[] args) {
        int menu;

        do {
        System.out.println("=====MENU=====");
        System.out.println("1- Opção 1");
        System.out.println("2- Sair");

        try (Scanner input = new Scanner(System.in)) {
            menu = input.nextInt();
        }
        
        } while (menu != 2);

    }
}
