package raniery.dev.utils.operations;

import raniery.dev.utils.operations.internal.Div;
import raniery.dev.utils.operations.internal.Mult;
import raniery.dev.utils.operations.internal.Sub;
import raniery.dev.utils.operations.internal.Sum;

public class Calc {
    private final Sum sumHelper;
    private final Sub subHelper;
    private final Mult multHelper;
    private final Div divHelper;

    public Calc() {
        sumHelper = new Sum();
        subHelper = new Sub();
        multHelper = new Mult();
        divHelper = new Div();
    }

    public int sum(int a, int b) {
        return sumHelper.execute(a, b);
    }

    public int sub(int a, int b) {
        return subHelper.execute(a, b);
    }

    public int mult(int a, int b) {
        return multHelper.execute(a, b);
    }

    public int div(int a, int b) {
        return divHelper.execute(a, b);
    }

}
