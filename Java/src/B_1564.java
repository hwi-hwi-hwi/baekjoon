import java.math.BigInteger;
import java.util.Scanner;

public class B_1564 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        long result = 1;
        int count2 = 0, count5 = 0;

        for (int i = 2; i <= n; i++) {
            int num = i;

            while (num % 2 == 0) {
                num /= 2;
                count2++;
            }

            while (num % 5 == 0) {
                num /= 5;
                count5++;
            }

            result *= num;
            result %= 1000000000000L;
        }

        int diff = count2 - count5;
        for (int i = 0; i < diff; i++) {
            result *= 2;
            result %= 1000000000000L;
        }

        result %= 100000;

        System.out.printf("%05d\n", result);
    }
}
