import java.math.BigInteger;
import java.util.Scanner;

public class B_13706 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        BigInteger n = new BigInteger(input.nextLine());

        BigInteger left = BigInteger.ZERO;
        BigInteger right = n;
        BigInteger mid;

        while (left.compareTo(right) <= 0) {
            mid = left.add(right).divide(BigInteger.TWO);

            BigInteger square = mid.multiply(mid);
            int cmp = square.compareTo(n);

            if (cmp == 0) {
                System.out.println(mid);
                return;
            } else if (cmp < 0) {
                left = mid.add(BigInteger.ONE);
            } else {
                right = mid.subtract(BigInteger.ONE);
            }
        }
    }
}
