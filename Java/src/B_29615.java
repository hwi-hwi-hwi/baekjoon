import java.util.Scanner;

public class B_29615 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int m = sc.nextInt();

        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        boolean[] isFriend = new boolean[n + 1];
        for (int i = 0; i < m; i++) {
            isFriend[sc.nextInt()] = true;
        }
        sc.close();

        int count = 0;
        for (int i = 0; i < m; i++) {
            if (!isFriend[arr[i]]) {
                count++;
            }
        }

        System.out.println(count);
    }
}
