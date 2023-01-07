/*
Um comerciante quer vender seus produtos com um
lucro de 45% caso o valor da compra for menor
que R$30,00. Caso contrário, o lucro deverá ser
de 30%. Faça um programa que recebe o valor do
produto e devolve o valor da venda.
 */
import java.util.Scanner;
public class exerc3 {
    public static void main(String[] args) {
        Scanner sales = new Scanner(System.in);
        System.out.println("Qual o valor da compra?");
        float value = sales.nextFloat();
        if (value < 30){
            System.out.printf("O lucro foi de R$%.2f", (value * 0.45));
        } else {
            System.out.printf("O lucro foi de R$%.2f", (value * 0.3));
        }
    }
}