import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    
    Scanner monitor = new Scanner(System.in);
    System.out.println("Digite o primeiro número");
    float primeiroNumero = monitor.nextFloat();
    
    monitor = new Scanner(System.in);
    System.out.println("Digite o segundo número");
    float segundoNumero = monitor.nextFloat();

    monitor = new Scanner(System.in);
    System.out.println("Digite o terceiro número");
    float terceiroNumero = monitor.nextFloat();

    float Media = (primeiroNumero + segundoNumero + terceiroNumero)/3; 
    
    System.out.println("A média é: " + Media);
  }
}