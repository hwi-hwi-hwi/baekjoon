import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class B_1446 {

    static class Shortcut {
        int start, end, cost;

        public Shortcut(int start, int end, int cost) {
            this.start = start;
            this.end = end;
            this.cost = cost;
        }

    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int d = input.nextInt();

        List<Shortcut> shortcuts = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            int start = input.nextInt();
            int end = input.nextInt();
            int cost = input.nextInt();

            if (end > d || (end - start) <= cost) {
                continue;
            }

            shortcuts.add(new Shortcut(start, end, cost));
        }
        input.close();

        int[] dp = new int[d + 1];
        Arrays.fill(dp, Integer.MAX_VALUE);
        dp[0] = 0;

        for (int i = 0; i <= d; i++) {
            if (i < d) {
                dp[i + 1] = Math.min(dp[i + 1], dp[i] + 1);
            }

            for (Shortcut s : shortcuts) {
                if (s.start == i) {
                    dp[s.end] = Math.min(dp[s.end], dp[i] + s.cost);
                }
            }
        }

        System.out.println(dp[d]);
    }
}
