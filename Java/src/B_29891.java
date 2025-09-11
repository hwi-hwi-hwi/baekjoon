import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;
import java.util.StringTokenizer;

public class B_29891 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int n = Integer.parseInt(st.nextToken());
        int k = Integer.parseInt(st.nextToken());

        List<Long> left = new ArrayList<>();
        List<Long> right = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            long x = Long.parseLong(br.readLine().trim());

            if (x < 0) {
                left.add(-x);
            } else if (x > 0) {
                right.add(x);
            }
        }
        left.sort(Comparator.reverseOrder());
        right.sort(Comparator.reverseOrder());

        long ans = 0;

        for (int i = 0; i < left.size(); i += k) {
            ans += 2 * left.get(i);
        }

        for (int i = 0; i < right.size(); i += k) {
            ans += 2 * right.get(i);
        }

        System.out.println(ans);
    }
}
