import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class B_30088 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        List<Integer> deptTotal = new ArrayList<>(n);
        StringTokenizer st;

        for (int i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine());
            int k = Integer.parseInt(st.nextToken());

            long total = 0;

            for (int j = 0; j < k; j++) {
                total += Integer.parseInt(st.nextToken());
            }

            deptTotal.add((int) total);
        }

        Collections.sort(deptTotal);

        long time = 0;
        long ans = 0;
        for (int total : deptTotal) {
            time += total;
            ans += time;
        }

        System.out.println(ans);
    }
}