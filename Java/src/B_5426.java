import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class B_5426 {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        StringBuilder sb = new StringBuilder();

        for (int tc = 0; tc < t; tc++) {
            String s = br.readLine();
            int n = s.length();
            int k = (int) Math.sqrt(n);

            StringBuilder plain = new StringBuilder(n);
            for (int i = 0; i < k; i++) {
                for (int j = 0; j < k; j++) {
                    plain.append(s.charAt(j * k + (k - 1 - i)));
                }
            }
            sb.append(plain).append("\n");
        }

        System.out.println(sb);
    }
}
