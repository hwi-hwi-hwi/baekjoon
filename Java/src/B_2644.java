import java.util.*;

public class B_2644 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int start = input.nextInt();
        int end = input.nextInt();
        int m = input.nextInt();

        List<List<Integer>> adj = new ArrayList<>();
        for (int i = 0; i <= n; i++) {
            adj.add(new ArrayList<>());
        }

        for (int i = 0; i < m; i++) {
            int x = input.nextInt();
            int y = input.nextInt();
            adj.get(x).add(y);
            adj.get(y).add(x);
        }
        input.close();

        boolean[] visited = new boolean[n + 1];
        int[] dist = new int[n + 1];
        Arrays.fill(dist, -1);

        Queue<Integer> queue = new LinkedList<>();

        visited[start] = true;
        dist[start] = 0;
        queue.offer(start);

        while (!queue.isEmpty()) {
            int cur = queue.poll();

            if (cur == end) {
                break;
            }

            for (int next : adj.get(cur)) {
                if (!visited[next]) {
                    visited[next] = true;
                    dist[next] = dist[cur] + 1;
                    queue.offer(next);
                }
            }
        }

        System.out.println(dist[end]);
    }
}
