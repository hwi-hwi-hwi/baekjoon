import java.io.*;
import java.util.*;

public class B_28238 {
    public static void main(String[] args) throws IOException {
        // 빠른 입력
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int[][] students = new int[n][5];

        for (int i = 0; i < n; i++) {
            String[] line = br.readLine().split(" ");
            for (int j = 0; j < 5; j++) {
                students[i][j] = Integer.parseInt(line[j]);
            }
        }

        int maxCount = 0;
        int[] bestSchedule = new int[5];

        // 5일 중 2일을 고르는 모든 조합
        for (int d1 = 0; d1 < 5; d1++) {
            for (int d2 = d1 + 1; d2 < 5; d2++) {
                int count = 0;

                for (int i = 0; i < n; i++) {
                    if (students[i][d1] == 1 && students[i][d2] == 1) {
                        count++;
                    }
                }

                if (count > maxCount) {
                    maxCount = count;
                    Arrays.fill(bestSchedule, 0);
                    bestSchedule[d1] = 1;
                    bestSchedule[d2] = 1;
                }
            }
        }

        System.out.println(maxCount);
        for (int i = 0; i < 5; i++) {
            System.out.print(bestSchedule[i] + " ");
        }
        System.out.println();
    }
}
