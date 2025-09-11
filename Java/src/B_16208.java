import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;
import java.util.StringTokenizer;

public class B_16208 {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        int[] sticks = new int[n];

        StringTokenizer st = new StringTokenizer(br.readLine());

        for (int i = 0; i < n; i++) {
            sticks[i] = Integer.parseInt(st.nextToken());
        }

        BigInteger ans = BigInteger.ZERO;
        BigInteger prefixSum = BigInteger.ZERO;

        for (int i = 0; i < n; i++) {
            BigInteger x = BigInteger.valueOf(sticks[i]);
            ans = ans.add(prefixSum.multiply(x));  // ans += prefixSum * x;
            prefixSum = prefixSum.add(x);
        }

        System.out.println(ans);
    }
}
