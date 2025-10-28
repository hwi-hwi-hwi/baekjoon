import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class B_1197 {

    static class Edge implements Comparable<Edge> {
        // a: 간선의 시작 정점 번호
        // b: 간선의 끝 정점 번호
        // c: 간선의 가중치(weight)
        int a, b, c;

        Edge(int a, int b, int c) {  // 생성자
            this.a = a;
            this.b = b;
            this.c = c;
        }

        @Override
        public int compareTo(Edge other) {
            return this.c - other.c;  // 가중치 기준으로 오름차순 정렬
        }
    }

    /* Union - Find 알고리즘 */
    static int[] root;

    // 특정 원소가 어떤 집합에 속하는지 알아내는 find
    static int find(int x) {
        if (root[x] == x) {
            return x;
        }

        return root[x] = find(root[x]);
    }

    // (두 원소가 다른 집합에 속할 때)두 집합들의 합집합을 생성하는 union
    static void union(int x, int y) {
        x = find(x);
        y = find(y);

        if (x != y) {
            root[y] = x;
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine());
        // 정점의 개수 v, 간선의 개수 e
        int v = Integer.parseInt(st.nextToken());
        int e = Integer.parseInt(st.nextToken());

        Edge[] edges = new Edge[e];
        for (int i = 0; i < e; i++) {
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            int c = Integer.parseInt(st.nextToken());

            edges[i] = new Edge(a, b, c);
        }
        Arrays.sort(edges);

        root = new int[v + 1];
        for (int i = 0; i < v; i++) {
            root[i] = i;
        }

        int totalWeight = 0, edgeCount = 0;
        for (Edge k : edges) {
            if (find(k.a) != find(k.b)) {
                union(k.a, k.b);
                totalWeight += k.c;

                edgeCount++;
                if (edgeCount == v - 1) {
                    break;
                }
            }
        }
        System.out.println(totalWeight);
    }
}
