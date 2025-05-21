import java.util.Scanner;

public class B_26595 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long n = input.nextInt();
        long a = input.nextInt();
        long pa = input.nextInt();
        long b = input.nextInt();
        long pb = input.nextInt();

        long maxPower = 0;
        long answerX = 0, answerY = 0;
        for (long x = 0; x <= n / pa; x++) {
            long remainingMoney = n - (x * pa);
            long y = remainingMoney / pb;

            long totalPower = a * x + b * y;

            if (totalPower > maxPower) {
                maxPower = totalPower;
                answerX = x;
                answerY = y;
            }
        }

        System.out.println(answerX + " " + answerY);
    }
}