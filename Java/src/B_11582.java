import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class B_11582 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        int[] scores = new int[n];

        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        for (int i = 0; i < n; i++) {
            scores[i] = Integer.parseInt(st.nextToken());
        }

        int k = Integer.parseInt(br.readLine());
        int l = n / k;

        for (int i = 0; i < k; i++) {
            int from = i * l;
            int to = from + l;

            Arrays.sort(scores, from, to);
        }

        StringBuilder sb = new StringBuilder();
        for (int x : scores) {
            sb.append(x).append(' ');
        }

        System.out.println(sb.toString().trim());
    }
}
