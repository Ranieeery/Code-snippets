//pt: Escreva um algoritmo que recebe um valor e imprima a sua tabuada
//en: Write an algorithm that receives a value and prints it in a multiplication table

import java.util.Scanner;
public class exerc1 {
  public static void main(String[] args) {
    Scanner tabuada = new Scanner(System.in);
    System.out.println("Insira o número que deseja ver a tabuada:");
    int num = tabuada.nextInt();
    System.out.printf("Segue abaixo a tabuada do número %d%n", num);
    for (int i = 1; i <= 11; i++){
      if (i > 10) {
        System.out.println("Tabuada calculada com sucesso");
      } else {
        System.out.println(num * i);
      }
    }
  }
}