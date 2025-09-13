import java.util.Scanner;

public class B_2445 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        // 위쪽
        for (int i = 1; i <= n; i++) {
            // 왼쪽 별
            for (int j = 1; j <= i; j++) {
                System.out.print('*');
            }
            // 왼쪽 공백
            for (int j = n-1; j >= i; j--) {
                System.out.print(' ');
            }

            // 오른쪽 공백
            for (int j = n - 1; j >= i; j--) {
                System.out.print(' ');
            }

            // 오른쪽 별
            for (int j = 1; j <= i; j++) {
                System.out.print('*');
            }
            System.out.println();
        }

        // 아래쪽
        for (int i = 1; i <= n - 1; i++) {
            // 왼쪽 별
            for (int j = n - 1; j >= i; j--) {
                System.out.print('*');
            }

            // 왼쪽 공백
            for (int j = 1; j <= i; j++) {
                System.out.print(' ');
            }

            // 오른쪽 공백
            for (int j = 1; j <= i; j++) {
                System.out.print(' ');
            }

            // 오른쪽 별
            for (int j = n - 1; j >= i; j--) {
                System.out.print('*');
            }

            System.out.println();
        }
    }
}
