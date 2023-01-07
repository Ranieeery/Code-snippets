import javax.swing.*;
public class Main {
    public static void main(String[] args) {
        // Declaração de variáveis
        int sexo;
        double pesoIdeal;
        double altura;
        String temp;

        while (true) {
            temp = JOptionPane.showInputDialog(
                    "Por favor, informe a sua altura");
            altura = Double.parseDouble(temp);
            temp = JOptionPane.showInputDialog(
                    "Por favor informe o sexo\n" + "1 para Masculino\n2 para Feminino");
            sexo = Integer.parseInt(temp);
            if (sexo == 1) { // Se o sexo for masculino
                pesoIdeal = (72.7 * altura) - 58;
                String pesoFinal = String.format("Seu peso ideal é %.2f Kg", pesoIdeal);
                temp = pesoFinal;
            } else if (sexo == 2) { // Se o sexo for feminino
                pesoIdeal = (62.1 * altura) - 44.7;
                String pesoFinal = String.format("Seu peso ideal é %.2f Kg", pesoIdeal);
                temp = pesoFinal;
            } else { // Valor informado é inválido
                temp = "O valor informado para sexo não permite calcular o peso ideal";
            }
            JOptionPane.showMessageDialog(null, temp);
        }
    }
}