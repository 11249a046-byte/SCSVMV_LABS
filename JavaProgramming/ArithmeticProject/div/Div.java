package div;

public class Div {
    public void divop(int a, int b) {
        if (b == 0) {
            System.out.println("Division by zero is not allowed.");
            return;
        }

        int res = a / b;
        System.out.println("Div: " + res);
    }
}