import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class B_14914 {

    static int gcd(int x, int y){
        while (y != 0) {
            int t = x % y;
            x = y;
            y = t;
        }

        return x;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int a = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());

        int g = gcd(a, b);

        StringBuilder sb = new StringBuilder();

        for (int friend = 1; friend <= g; friend++) {
            if (g % friend == 0) {
                sb.append(friend).append(' ').append(a / friend).append(' ').append(b / friend).append('\n');
            }
        }

        System.out.println(sb.toString());
    }
}
