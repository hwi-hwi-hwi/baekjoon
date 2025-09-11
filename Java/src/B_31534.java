import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class B_31534 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        long a = Long.parseLong(st.nextToken());
        long b = Long.parseLong(st.nextToken());
        long h = Long.parseLong(st.nextToken());

        if (a == b) {
            System.out.println(-1);
            return;
        }

        double da = a;
        double db = b;
        double dh = h;

        double diff = Math.abs(db - da);
        double ss = (dh * dh) + diff * diff;

        double area = Math.PI * ss * ((da + db) / diff);

        System.out.println(area);
    }
}
