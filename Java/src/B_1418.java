import java.util.Scanner;

public class B_1418 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int k = sc.nextInt();
        sc.close();

        int[] maxPrime = new int[n + 1];
        maxPrime[1] = 1;

        for (int p = 2; p < n + 1; p++) {
            if (maxPrime[p] == 0) {
                for (int j = p; j < n + 1; j += p) {
                    maxPrime[j] = p;
                }
            }
        }

        int count = 0;
        for (int i = 1; i < n + 1; i++) {
            if (maxPrime[i] <= k) {
                count++;
            }
        }

        System.out.println(count);
    }
}
