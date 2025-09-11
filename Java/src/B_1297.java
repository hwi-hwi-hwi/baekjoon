import java.util.Scanner;

public class B_1297 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int d = sc.nextInt();
        int h = sc.nextInt();
        int w = sc.nextInt();

        double k = d / Math.sqrt((double) h * h + (double) w * w);

        int realH = (int) Math.floor(h * k);
        int realW = (int) Math.floor(w * k);

        System.out.println(realH + " " + realW);
    }
}
