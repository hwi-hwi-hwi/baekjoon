import java.util.Arrays;
import java.util.Scanner;

public class B_32752 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int n = input.nextInt();
        int l = input.nextInt() - 1;
        int r = input.nextInt() - 1;

        int[] A = new int[n];
        for (int i = 0; i < n; i++) {
            A[i] = input.nextInt();
        }

        int[] B = Arrays.copyOfRange(A, l, r + 1);
        Arrays.sort(B);

        if (l > 0 && A[l - 1] > B[0]) {
            System.out.println(0);
            return;
        }

        if (r < n - 1 && B[B.length - 1] > A[r + 1]) {
            System.out.println(0);
            return;
        }

        System.out.println(1);
    }
}
