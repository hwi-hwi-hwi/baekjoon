import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class B_1388 {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());

        char[][] board = new char[n][m];
        for (int i = 0; i < n; i++) {
            String line = br.readLine();
            board[i] = line.toCharArray();
        }

        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == '-') {
                    if (j == 0 || board[i][j - 1] != '-') {
                        count++;
                    }
                } else {
                    if(i == 0 || board[i-1][j] != '|'){
                        count++;
                    }
                }
            }
        }

        System.out.println(count);
    }
}
