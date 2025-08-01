import java.util.*;

public class B_1015 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();

        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = input.nextInt();
        }

        // 1. 각 원소와 인덱스 묶기
        List<int[]> list = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            list.add(new int[]{a[i], i});
        }
        // 원소 값을 기준으로 정렬
        list.sort(Comparator.comparing(o -> o[0]));

        // 정렬한 순서대로 B 위치(p[i]) 0 ~ n-1 부여
        int[] p = new int[n];
        for (int i = 0; i < n; i++) {
            int originalIndex = list.get(i)[1];
            p[originalIndex] = i;
        }

        for (int x : p) {
            System.out.print(x + " ");
        }
    }
}
