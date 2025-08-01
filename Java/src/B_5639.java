import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

public class B_5639 {

    static int[] pre;  // 전위 순회
    static int idx = 0;  // 현재 탐색 위치
    static int n;
    static StringBuilder sb = new StringBuilder();

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        List<Integer> list = new ArrayList<>();
        String line;
        while ((line = br.readLine()) != null && !line.isEmpty()) {
            list.add(Integer.parseInt(line.trim()));
        }
        br.close();

        n = list.size();
        pre = new int[n];
        for (int i = 0; i < n; i++) {
            pre[i] = list.get(i);
        }

        dfs(Integer.MIN_VALUE, Integer.MAX_VALUE);

        System.out.print(sb);
    }

    static void dfs(int min, int max) {
        if (idx >= n) {
            return;
        }

        int nowRoot = pre[idx];
        if (max <= nowRoot || nowRoot <= min) {
            return;
        }

        idx++;
        // 왼쪽 서브 트리
        dfs(min, nowRoot);
        // 오른쪽 서브 트리
        dfs(nowRoot, max);

        sb.append(nowRoot).append('\n');
    }
}
