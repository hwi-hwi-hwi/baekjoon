import java.util.HashSet;
import java.util.Scanner;

public class B_1544 {

    static String minRotation(String s) {
        int len = s.length();
        String ss = s + s;
        String best = ss.substring(0, len);
        for (int i = 1; i < len; i++) {
            String cand = ss.substring(i, i + len);
            if (cand.compareTo(best) < 0) {
                best = cand;
            }
        }

        return best;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        String[] words = new String[n];
        for (int i = 0; i < n; i++) {
            words[i] = sc.next();
        }
        sc.close();

        HashSet<String> set = new HashSet<>();
        for (String w : words) {
            set.add(minRotation(w));
        }

        System.out.println(set.size());
    }
}
