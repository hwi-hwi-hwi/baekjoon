import java.util.Scanner;

public class B_8979 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();

        int[] gold = new int[n + 1];
        int[] silver = new int[n + 1];
        int[] bronze = new int[n + 1];

        for (int i = 1; i <= n; i++) {
            int country = input.nextInt();

            gold[country] = input.nextInt();
            silver[country] = input.nextInt();
            bronze[country] = input.nextInt();
        }
        input.close();

        int kg = gold[k], ks = silver[k], kb = bronze[k];

        int better = 0;
        for (int i = 1; i <= n; i++) {
            if(i == k)  continue;

            int g = gold[i], s = silver[i], b = bronze[i];

            if ((g > kg) || (g == kg && s > ks) || (g == kg && s == ks && b > kb)) {
                better++;
            }
        }

        System.out.println(better + 1);
    }
}
