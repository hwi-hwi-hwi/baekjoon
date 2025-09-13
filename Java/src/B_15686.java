import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;

public class B_15686 {

    static class Pos{
        int r, c;

        Pos(int r, int c) {
            this.r = r;
            this.c = c;
        }
    }

    static int n, m, homesSize, shopsSize;
    static List<Pos> homes = new ArrayList<>();
    static List<Pos> shops = new ArrayList<>();
    static int[][] dist;  // dist[h][s] = h번째 집과 s번째 치킨집 사이의 거리
    static boolean[] picked;  // 선택한 치킨집 표시
    static int best = Integer.MAX_VALUE;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        n = Integer.parseInt(st.nextToken());
        m = Integer.parseInt(st.nextToken());

        // 지도 입력
        int[][] map = new int[n][n];
        for (int r = 0; r < n; r++) {
            st = new StringTokenizer(br.readLine());
            for (int c = 0; c < n; c++) {
                int current = Integer.parseInt(st.nextToken());
                // 0은 빈 칸, 1은 집, 2는 치킨집
                if (current == 1) {
                    homes.add(new Pos(r, c));
                } else if (current == 2) {
                    shops.add(new Pos(r, c));
                }
            }
        }

        homesSize = homes.size();
        shopsSize = shops.size();

        picked = new boolean[shopsSize];

        // 집-치킨집 거리 미리 계산
        dist = new int[homesSize][shopsSize];  // dist[h][s] = h번째 집과 s번째 치킨집 사이의 거리
        for (int i = 0; i < homesSize; i++) {
            Pos home = homes.get(i);
            for (int j = 0; j < shopsSize; j++) {
                Pos shop = shops.get(j);
                dist[i][j] = Math.abs(home.r - shop.r) + Math.abs(home.c - shop.c);
            }
        }

        dfs(0, 0);

        System.out.println(best);
    }

    // 현재 picked 조합에서의 도시 치킨 거리
    static int cityDistance() {
        int citySum = 0;

        for (int i = 0; i < homesSize; i++) {
            // 현재 집에서, 선택된 치킨집들과의 거리 중, 가장 짧은 거리
            int minDist = Integer.MAX_VALUE;

            for (int j = 0; j < shopsSize; j++) {
                if (picked[j]) {  // 선택된 치킨집(picked[j] == true)일 때만
                    if (dist[i][j] < minDist) {  // 지금까지 본 치킨집들보다 거리가 더 짧다면
                        minDist = dist[i][j];  // 최소 거리값 갱신
                    }
                }
            }

            citySum += minDist;

            if (citySum >= best) {  // 현재 최적보다 커지면 일찍 중단
                return citySum;
            }
        }

        return citySum;
    }

    // idx: 현재 고려 중인 치킨집 인덱스, count: 지금까지 고른 치킨집 수
    static void dfs(int idx, int count) {
        if (count == m) {
            best = Math.min(best, cityDistance());
            return;
        }

        if (idx == shopsSize) {  // 마지막 치킨집까지 다 확인을 마친 상태
            return;
        }

        // shopSize - idx: 아직 남아 있는 치킨집 개수
        // count + (shopsSize - idx): 지금까지 고른 치킨집 수 + 앞으로 최대 선택 가능한 치킨집 수
        if (count + (shopsSize - idx) < m) {  // 만약 이 값이 m보다 작으면?
            // 앞으로 남은 걸 전부 뽑아도 M개를 채울 수 없음
            // → 이 경우 더 깊게 탐색해봤자 답이 될 수 없음
            return;
        }

        // 1번 방법이나 2번 방법
        // 1) idx 번째 치킨집 선택하는 경우
        picked[idx] = true;
        dfs(idx + 1, count + 1);

        // 2) idx 번째 치킨집 선택하지 않는 경우
        picked[idx] = false;
        dfs(idx + 1, count);
    }
}
