import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class B_11899 {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String s = br.readLine().trim();

        int bal = 0;
        int minBal = 0;

        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);

            if (ch == '(') {
                bal += 1;
            } else {
                bal -= 1;
            }

            if (bal < minBal) {
                minBal = bal;
            }
        }

        int finalBal = bal;

        int L = Math.max(-minBal, -finalBal);
        int R = L + finalBal;

        System.out.println(L + R);
    }
}
