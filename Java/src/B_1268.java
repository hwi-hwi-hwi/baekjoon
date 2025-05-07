import java.io.*;
import java.util.*;

public class B_1268 {
    public static void main(String[] args) throws IOException {
        // 빠른 입력
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        int[][] student = new int[n][5]; // 0-based: 학생 수, 학년 5개

        // 입력 받기
        for (int i = 0; i < n; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            for (int j = 0; j < 5; j++) {
                student[i][j] = Integer.parseInt(st.nextToken());
            }
        }

        int max = -1;
        int leader = 0;

        for (int i = 0; i < n; i++) {
            int cnt = 0;

            for (int j = 0; j < n; j++) {
                if (i == j) continue;

                for (int k = 0; k < 5; k++) {
                    if (student[i][k] == student[j][k]) {
                        cnt++;
                        break; // 한 번이라도 겹치면 break
                    }
                }
            }

            if (cnt > max) {
                max = cnt;
                leader = i + 1; // 학생 번호는 1번부터
            }
        }

        System.out.println(leader);
    }
}
