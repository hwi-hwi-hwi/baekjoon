import java.util.Scanner;

public class B_1735 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a1 = sc.nextInt();
        int b1 = sc.nextInt();
        int a2 = sc.nextInt();
        int b2 = sc.nextInt();

        int a = (a1 * b2) + (a2 * b1);
        int b = b1 * b2;

        int g = gcd(a, b);

        a /= g;
        b /= g;

        System.out.println(a + " " + b);
    }

    private static int gcd(int x, int y) {
        if (y == 0) {
            return x;
        }

        return gcd(y, x % y);
    }
}
