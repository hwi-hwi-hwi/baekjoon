import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class B_25707 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());

        int[] marbles = new int[n];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < marbles.length; i++) {
            marbles[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(marbles);

        int ans = 0;
        for (int i = 0; i <= n - 2; i++) {
            ans += Math.abs(marbles[i + 1] - marbles[i]);
        }
        ans += Math.abs(marbles[n - 1] - marbles[0]);

        System.out.println(ans);
    }
}
