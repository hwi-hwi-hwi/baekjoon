import java.io.*;
import java.util.*;

public class B_28238 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        /* 학생 availability 저장: row = 학생, col = 요일(0~4) */
        byte[][] avail = new byte[n][5];

        for (int i = 0; i < n; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            for (int d = 0; d < 5; d++) {
                avail[i][d] = (byte) Integer.parseInt(st.nextToken());
            }
        }

        int bestCnt = -1;            // **-1 로 초기화!**
        int[] best = new int[5];     // 출력용 배열

        /* 5일 중 2일을 고르는 모든 조합은 10가지뿐 */
        for (int d1 = 0; d1 < 5; d1++) {
            for (int d2 = d1 + 1; d2 < 5; d2++) {

                int cnt = 0;   // 현재 조합에서 수강 가능한 학생 수

                for (int s = 0; s < n; s++) {
                    if (avail[s][d1] == 1 && avail[s][d2] == 1) {
                        cnt++;
                    }
                }

                if (cnt > bestCnt) {         // **무조건 ‘>’ 비교**
                    bestCnt = cnt;
                    Arrays.fill(best, 0);
                    best[d1] = 1;
                    best[d2] = 1;
                }
            }
        }

        /* 출력 */
        StringBuilder sb = new StringBuilder();
        sb.append(bestCnt).append('\n');
        for (int i = 0; i < 5; i++) sb.append(best[i]).append(i == 4 ? '\n' : ' ');
        System.out.print(sb);
    }
}
