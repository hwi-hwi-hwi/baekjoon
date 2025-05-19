import java.util.*;

public class B_1504 {

    static class Node implements Comparable<Node> {
        int index, cost;

        Node(int index, int cost) {
            this.index = index;
            this.cost = cost;
        }

        public int compareTo(Node other) {
            return this.cost - other.cost;
        }
    }

    static int n, e;  // n: 정점 개수, e: 간선 개수
    static List<List<Node>> graph = new ArrayList<>();
    static final int INF = 200_000_000;

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        e = input.nextInt();

        // 그래프 초기화
        for (int i = 0; i <= n; i++) {
            graph.add(new ArrayList<>());
        }

        // 간선 입력
        for (int i = 0; i < e; i++) {
            int a = input.nextInt();
            int b = input.nextInt();
            int c= input.nextInt();

            graph.get(a).add(new Node(b, c));
            graph.get(b).add(new Node(a, c));
        }

        int v1 = input.nextInt();
        int v2 = input.nextInt();

        int[] distFrom1 = dijkstra(1);
        int[] distFromV1 = dijkstra(v1);
        int[] distFromV2 = dijkstra(v2);

        // 1 → v1 → v2 → N
        long path1 = (long)distFrom1[v1] + distFromV1[v2] + distFromV2[n];
        // 1 → v2 → v1 → N
        long path2 = (long) distFrom1[v2] + distFromV2[v1] + distFromV1[n];

        long ans = Math.min(path1, path2);

        System.out.println(ans >= INF ? -1 : ans);
    }

    static int[] dijkstra(int start) {
        PriorityQueue<Node> pq = new PriorityQueue<>();
        int[] dist = new int[n + 1];
        Arrays.fill(dist, INF);

        dist[start] = 0;
        pq.add(new Node(start, 0));

        while (!pq.isEmpty()) {
            Node current = pq.poll();

            if (current.cost > dist[current.index]) {
                continue;
            }

            for (Node next : graph.get(current.index)) {
                if (dist[next.index] > dist[current.index] + next.cost) {
                    dist[next.index] = dist[current.index] + next.cost;
                    pq.add(new Node(next.index, dist[next.index]));
                }
            }
        }

        return dist;
    }
}
