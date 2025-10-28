import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class B_1730 {

    static int n;
    static char[][] board;
    static int r = 0, c = 0;

    // 위쪽으로 이동은 'U', 아래쪽으로 이동은 'D', 왼쪽으로 이동은 'L', 오른쪽으로 이동은 'R'
    // 로봇팔이 지나지 않은 점은 '.'으로, 로봇팔이 수직 방향으로만 지난 점은 '|'으로, 로봇팔이 수평 방향으로만 지난 점은 '-'으로, 수직과 수평 방향 모두로 지난 점은 '+'
    // 네 문자의 ASCII 코드는 각각 46, 124, 45, 43
    static void mark(int x, int y, char ch) {
        if (board[x][y] == '.') {
            board[x][y] = ch;
        } else if (board[x][y] == '|' && ch == '-') {
            board[x][y] = '+';
        } else if (board[x][y] == '-' && ch == '|') {
            board[x][y] = '+';
        } else if (board[x][y] == '|' && ch == '|') {
            board[x][y] = '|';
        }else if (board[x][y] == '-' && ch == '-') {
            board[x][y] = '-';
        }else if (board[x][y] == '+') {
            board[x][y] = '+';
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        n = Integer.parseInt(br.readLine());
        board = new char[n][n];

        // '.' 으로 초기화
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                board[i][j] = '.';
            }
        }

        String moves = br.readLine();
        for (char move : moves.toCharArray()) {
            int rowNum = r, columnNum = c;

            if (move == 'U') {
                rowNum--;
            } else if (move == 'D') {
                rowNum++;
            } else if (move == 'L') {
                columnNum--;
            } else if (move == 'R') {
                columnNum++;
            }

            if (rowNum < 0 || n <= rowNum || columnNum < 0 || n <= columnNum) {
                continue;
            }

            if (move == 'U' || move == 'D') {  // 수직 이동
                mark(r, c, '|');  // 출발점
                mark(rowNum, columnNum, '|');  // 도착점
            }else if (move == 'L' || move == 'R') {  // 수평 이동
                mark(r, c, '-');  // 출발점
                mark(rowNum, columnNum, '-');  // 도착점
            }

            r = rowNum;
            c = columnNum;
        }

        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < n; i++) {
            sb.append(board[i]).append("\n");
        }

        System.out.println(sb);
    }
}
