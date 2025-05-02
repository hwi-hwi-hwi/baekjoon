import java.util.Scanner;

public class B_29719 {
    static final int MOD = 1_000_000_007;

    public static long modPow(long base, long exp) {
        long result = 1;
        base %= MOD;

        while (exp > 0) {
            if ((exp & 1) == 1) {  // 현재 지수가 홀수인지 확인
                result = (result * base) % MOD;
            }

            base = (base * base) % MOD;
            exp /= 2;
        }

        return result;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int n = input.nextInt();
        int m = input.nextInt();

        long total = modPow(m, n);
        long exclude = modPow(m - 1, n);

        long ans = (total - exclude + MOD) % MOD;

        System.out.println(ans);
        input.close();
    }
}