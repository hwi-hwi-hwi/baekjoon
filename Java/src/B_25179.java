import java.util.Scanner;

public class B_25179 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        long n = input.nextLong();
        long m = input.nextLong();

        if (n % (m + 1) != 1) {
            System.out.println("Can win");
        } else {
            System.out.println("Can't win");
        }
    }
}