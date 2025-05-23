import java.util.Scanner;

public class B_1057 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int a = input.nextInt();
        int b = input.nextInt();

        int count = 0;
        while (a != b) {
            a = (a + 1) / 2;
            b = (b + 1) / 2;

            count++;
        }

        System.out.println(count);
    }
}
