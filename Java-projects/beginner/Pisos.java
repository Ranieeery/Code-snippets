import java.util.Scanner;
public class Pisos {
  public static void main(String[] args) {
    Scanner piso = new Scanner(System.in);
    // Dimensões do quarto
    System.out.println("Digite a largura do quarto:");
    double larguraquarto = piso.nextDouble();
    piso = new Scanner(System.in);
    System.out.println("Digite o comprimento do quarto:");
    double comprimentoquarto = piso.nextDouble();
    double quarto = larguraquarto * comprimentoquarto;
    // Tamanho piso
    piso = new Scanner(System.in);
    System.out.println("Digite a largura do piso:");
    double largurapiso = piso.nextDouble();
    piso = new Scanner(System.in);
    System.out.println("Digite o comprimento do piso:");
    double comprimentopiso = piso.nextDouble();
    double chao = largurapiso * comprimentopiso;
    // Cálculo
    double result1 = Math.ceil(quarto / chao);
    double result2 = Math.ceil(result1 * 1.1);
    System.out.printf("A quantidade de pisos é %.0f, porém é recomendado comprar %.0f por margem de segurança dos cortes.", result1, result2); 
  }
}