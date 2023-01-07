import java.util.Scanner;
public class Conta {
  public static void main(String[] args) {
    Scanner conta = new Scanner(System.in);
    System.out.println("Olá, bom dia! Qual o seu nome?");
    String nome = conta.nextLine();
    System.out.println("Digite o seu salário");
    double salario = conta.nextDouble();
    System.out.println("Digite o valor das contas");
    double conta1 = conta.nextDouble();
    double conta2 = conta.nextDouble();
    double conta3 = conta.nextDouble();
    double conta4 = conta.nextDouble();
    double total = conta1 + conta2 + conta3 + conta4;
    double result = salario - total;
    double preju = Math.abs(result);
    System.out.println(" ");
    System.out.printf("%s, o valor total das contas é R$%.2f %n", nome, total);
    if (result > 0) {
      System.out.printf("Sobrará R$%.2f do seu salário", preju);
    } else if (result < 0){
      System.out.printf("Complicou %s, irá faltar R$%.2f para pagar todas as contas", nome, preju);
    } else {
      System.out.println("Você pagou todas as suas contas porém não sobrou nada");
    }
  }
}