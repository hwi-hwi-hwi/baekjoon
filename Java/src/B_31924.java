import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class B_31924 {

    static int n;
    static char[][] board;
    static String target = "MOBIS";
    static int[] dc = {-1, 0, 1, -1, 1, -1, 0, 1};
    static int[] dr = {-1, -1, -1, 0, 0, 1, 1, 1};

    static boolean check(int r, int c, int dir) {  // 현재 시작점 (r,c)
        for (int k = 0; k < target.length(); k++) {
            int nr = r + dr[dir] * k;
            int nc = c + dc[dir] * k;

            if ((nr < 0 || n <= nr) || (nc < 0 || n <= nc)) {
                return false;
            }

            if (board[nr][nc] != target.charAt(k)) {
                return false;
            }
        }

        return true;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        n = Integer.parseInt(br.readLine());
        board = new char[n][n];
        for (int i = 0; i < n; i++) {
            String line = br.readLine().trim();
            for (int j = 0; j < n; j++) {
                board[i][j] = line.charAt(j);
            }
        }

        int count = 0;
        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n; c++) {
                if (board[r][c] == 'M') {  // 반드시 'M' 으로 시작
                    for (int d = 0; d < 8; d++) {
                        if (check(r, c, d)) {
                            count++;
                        }
                    }
                }
            }
        }

        System.out.println(count);
    }
}
