import java.util.Scanner;

public class B_1812 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();

        long[] candySum = new long[n];
        for (int i = 0; i < n; i++) {
            candySum[i] = input.nextLong();
        }
        input.close();

        long alt = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                alt += candySum[i];
            } else {
                alt -= candySum[i];
            }
        }
        long c0 = alt / 2;

        long[] candy = new long[n];
        candy[0] = c0;
        for (int i = 1; i < n; i++) {
            candy[i] = candySum[i - 1] - candy[i - 1];
        }

        for (long ans : candy) {
            System.out.println(ans);
        }
    }
}