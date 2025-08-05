import java.util.Scanner;

public class B_2828 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int m = sc.nextInt();

        int j = sc.nextInt();
        int[] apples = new int[j];
        for (int i = 0; i < j; i++) {
            apples[i] = sc.nextInt();
        }

        int L = 1, R = m, count = 0;
        for (int p : apples) {
            if (L <= p && p <= R) {
                continue;
            } else if (p < L) {
                count += L - p;

                L = p;
                R = L + m - 1;
            } else if (p > R) {
                count += p - R;

                R = p;
                L = R - m + 1;
            }
        }

        System.out.println(count);
    }
}
