import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class B_1004 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        int t = Integer.parseInt(br.readLine().trim());
        while (t-- > 0) {
            // 출발점 (x1, y1), 도착점 (x2, y2)
            st = new StringTokenizer(br.readLine());
            int x1 = Integer.parseInt(st.nextToken());
            int y1 = Integer.parseInt(st.nextToken());
            int x2 = Integer.parseInt(st.nextToken());
            int y2 = Integer.parseInt(st.nextToken());

            // 행성계의 개수 n
            int n = Integer.parseInt(br.readLine().trim());
            int crossings = 0;

            for (int i = 0; i < n; i++) {
                // 행성계의 중점과 반지름 (cx, cy, r)
                st = new StringTokenizer(br.readLine());
                int cx = Integer.parseInt(st.nextToken());
                int cy = Integer.parseInt(st.nextToken());
                int r = Integer.parseInt(st.nextToken());

                long dx1 = cx - x1;
                long dy1 = cy - y1;
                long distSq1 = dx1 * dx1 + dy1 * dy1;

                long dx2 = cx - x2;
                long dy2 = cy - y2;
                long distSq2 = dx2 * dx2 + dy2 * dy2;

                long rSq = 1L * r * r;

                boolean startInside = distSq1 < rSq;
                boolean endInside = distSq2 < rSq;

                if (startInside ^ endInside) {
                    crossings++;
                }
            }

            System.out.println(crossings);
        }

        br.close();
    }
}