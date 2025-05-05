import java.util.Scanner;

public class B_1051 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int n = input.nextInt();
        int m = input.nextInt();

        int[][] map = new int[n][m];
        for (int i = 0; i < n; i++) {
            String line = input.next();
            for (int j = 0; j < m; j++) {
                map[i][j] = line.charAt(j) - '0';
            }
        }

        int maxSize = 1;

        // 왼쪽 위: (i, j)
        // 오른쪽 위: (i, j+len)
        // 왼쪽 아래: (i+len, j)
        // 오른쪽 아래: (i+len, j+len)
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                for (int len = 1; i + len < n && j + len < m; len++) {
                    int val = map[i][j];
                    if (map[i][j + len] == val && map[i + len][j] == val && map[i + len][j + len] == val) {
                        int area = (len + 1) * (len + 1);
                        if (maxSize < area) {
                            maxSize = area;
                        }
                    }
                }
            }
        }

        System.out.println(maxSize);
    }
}
