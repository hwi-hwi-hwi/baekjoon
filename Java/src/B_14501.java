import java.util.Scanner;

public class B_14501 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int n = input.nextInt();
        int[] t = new int[n+1];
        int[] p = new int[n+1];
        int[] dp = new int[n+2];

        for (int i = 1; i <= n; i++) {
            t[i] = input.nextInt();
            p[i] = input.nextInt();
        }

        for (int i = 1; i <= n; i++) {
            dp[i] = Math.max(dp[i - 1], dp[i]);

            if (i + t[i] <= n+1) {
                dp[i + t[i]] = Math.max(dp[i + t[i]], dp[i] + p[i]);
            }
        }

        System.out.println(Math.max(dp[n], dp[n+1]));
    }
}
