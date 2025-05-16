import java.util.Scanner;

public class B_14916 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();

        int count = -1;

        for (int five = n / 5; five >= 0; five--) {
            int remaining = n - (5 * five);

            if (remaining % 2 == 0) {
                int two = remaining / 2;
                count = five + two;
                break;
            }
        }

        System.out.println(count);
    }
}
