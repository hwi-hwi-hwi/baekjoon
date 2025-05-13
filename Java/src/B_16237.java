import java.util.Scanner;

public class B_16237 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int[] w = new int[6];
        for (int i = 1; i <= 5; i++) {
            w[i] = input.nextInt();
        }

        int count = 0;

        // 5kg
        count += w[5];

        // 4kg
        count += w[4];
        w[1] -= Math.min(w[4], w[1]);

        // 3kg
        int pair32 = Math.min(w[3], w[2]);
        count += pair32;

        w[3] -= pair32;
        w[2] -= pair32;

        count += w[3];
        w[1] -= Math.min(w[3] * 2, w[1]);  // 남은 3kg은 1kg 2개와 짝짓기
        w[1] = Math.max(0, w[1]);   // ★ 음수 방지

        // 2kg
        count += w[2] / 2;
        if (w[2] % 2 == 1) {
            count += 1;
            w[1] -= Math.min(3, w[1]);
        }
        w[1] = Math.max(0, w[1]);   // ★ 음수 방지

        // 1kg
        if (w[1] > 0) {
            count += w[1] / 5;
            if (w[1] % 5 != 0) {
                count++;
            }
        }

        System.out.println(count);
    }
}
