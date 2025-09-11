import java.util.Scanner;

public class B_2444 {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        // 위 피라미드
        for (int i = 1; i <= n; i++) {
            for (int j = n; j > i; j--) {
                System.out.print(' ');
            }

            for (int k = 1; k <= i; k++) {
                System.out.print('*');
            }

            for (int l = 0; l < i - 1; l++) {
                System.out.print('*');
            }

            System.out.println();
        }

        // 아래 피라미드
        for (int i = 1; i < n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(' ');
            }

            for (int k = n; k > i; k--) {
                System.out.print('*');
            }

            for (int l = n - 1; l > i; l--) {
                System.out.print('*');
            }
            System.out.println();
        }
    }
}
