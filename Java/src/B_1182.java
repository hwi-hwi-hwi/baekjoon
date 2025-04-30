import java.util.Scanner;

public class B_1182 {
    static int n, s;
    static int[] arr;
    static int count = 0;

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        // 입력
        n = input.nextInt();
        s = input.nextInt();
        arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = input.nextInt();
        }

        dfs(0, 0, 0);

        System.out.println(count);
        
        input.close();
    }

    // 현재 원소를 포함할지 말지 결정하면서 진행
    static void dfs(int idx, int sum, int selectCount) {
        if (idx == n) {
            if (sum == s && selectCount != 0) {
                count++;
            }
            return;
        }

        // 현재 원소 포함
        dfs(idx + 1, sum + arr[idx], selectCount+1);
        // 현재 원소 미포함
        dfs(idx + 1, sum, selectCount);
    }
}