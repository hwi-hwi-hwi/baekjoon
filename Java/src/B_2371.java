import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;

public class B_2371 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());

        List<int[]> files = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());

            List<Integer> temp = new ArrayList<>();

            while (st.hasMoreTokens()) {
                int val = Integer.parseInt(st.nextToken());

                if (val == -1) {
                    break;
                }

                temp.add(val);
            }

            int[] arr = new int[temp.size()];
            for (int j = 0; j < temp.size(); j++) {
                arr[j] = temp.get(j);
            }

            files.add(arr);
        }

        int ans = 1;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int[] a = files.get(i);
                int[] b = files.get(j);

                int len = Math.max(a.length, b.length);
                for (int k = 0; k < len; k++) {
                    int av = (k < a.length) ? a[k] : 0;
                    int bv = (k < b.length) ? b[k] : 0;

                    if (av != bv) {
                        ans = Math.max(ans, k + 1);
                        break;
                    }
                }
            }
        }

        System.out.println(ans);
    }
}
