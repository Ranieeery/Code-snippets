package raniery.dev.main;


import raniery.dev.utils.operations.Calc;

public class Runner {
    public static void main(String[] args) {
        Calc calc = new Calc();

        System.out.println(STR."A soma é \{calc.sum(12, 3)}");
        System.out.println(STR."A subtração é \{calc.sub(12, 3)}");
        System.out.println(STR."A multiplicação é \{calc.mult(12, 3)}");
        System.out.println(STR."A divisão é \{calc.div(12, 3)}");
    }
}