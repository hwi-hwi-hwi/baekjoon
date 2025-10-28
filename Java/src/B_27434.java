import java.math.BigInteger;
import java.util.Scanner;

public class B_27434 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        if (n == 0) {
            System.out.println(1);
        } else {
            System.out.println(product(1, n));
        }
    }

    private static BigInteger product(int left, int right) {
        if (left > right) {
            return BigInteger.ONE;
        }

        if (left == right) {
            return BigInteger.valueOf(left);
        }

        int mid = left + (right - left) / 2;

        return product(left, mid).multiply(product(mid + 1, right));
    }
}
