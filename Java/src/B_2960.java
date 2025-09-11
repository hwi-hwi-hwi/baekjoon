import java.util.Scanner;

public class B_2960 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int k = sc.nextInt();
        sc.close();

        boolean[] isRemoved = new boolean[n + 1];

        int count = 0;
        for (int p = 2; p < n + 1; p++) {
            if (!isRemoved[p]) {
                for (int multiple = p; multiple < n + 1; multiple += p) {
                    if (!isRemoved[multiple]) {
                        isRemoved[multiple] = true;

                        count++;
                        if (count == k) {
                            System.out.println(multiple);
                            return;
                        }
                    }
                }
            }
        }
    }
}
