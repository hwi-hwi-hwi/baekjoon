import java.util.*;
import java.io.*;

public class B_9465 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine());
            int[][] stickers = new int[2][n];

            StringTokenizer st = new StringTokenizer(br.readLine());
            for (int i = 0; i < n; i++) {
                stickers[0][i] = Integer.parseInt(st.nextToken());
            }

            st = new StringTokenizer(br.readLine());
            for (int i = 0; i < n; i++) {
                stickers[1][i] = Integer.parseInt(st.nextToken());
            }

            int[][] dp = new int[2][n];
            // dp[0][i]: i번째 열에서 윗줄 스티커를 뗐을 때의 최대 점수
            // dp[1][i]: i번째 열에서 아랫줄 스티커를 뗐을 때의 최대 점수
            dp[0][0] = stickers[0][0];
            dp[1][0] = stickers[1][0];

            if (n > 1) {
                dp[0][1] = dp[1][0] + stickers[0][1];
                dp[1][1] = dp[0][0] + stickers[1][1];
            }

            for (int i = 2; i < n; i++) {
                dp[0][i] = Math.max(dp[1][i - 2], dp[1][i - 1]) + stickers[0][i];
                dp[1][i] = Math.max(dp[0][i - 2], dp[0][i - 1]) + stickers[1][i];
            }

            int ans = Math.max(dp[0][n - 1], dp[1][n - 1]);

            System.out.println(ans);
        }
    }
}
