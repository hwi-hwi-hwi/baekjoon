import java.util.Scanner;

public class B_10819 {

    static int n;
    static int[] a;
    static boolean[] visited;
    static int[] temp;
    static int max = Integer.MIN_VALUE;

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        n = input.nextInt();
        a = new int[n];
        visited = new boolean[n];
        temp = new int[n];

        for (int i = 0; i < n; i++) {
            a[i] = input.nextInt();
        }

        backtrack(0);

        System.out.println(max);
    }

    static void backtrack(int depth) {
        if (depth == n) {
            int sum = 0;
            for (int i = 0; i < n - 1; i++) {
                sum += Math.abs(temp[i] - temp[i + 1]);
            }

            max = Math.max(max, sum);
            return;
        }

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                visited[i] = true;
                temp[depth] = a[i];
                backtrack(depth + 1);
                visited[i] = false;
            }
        }
    }
}