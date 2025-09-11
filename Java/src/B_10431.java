import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class B_10431 {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int p = Integer.parseInt(br.readLine());

        while (p-- > 0) {
            StringTokenizer st = new StringTokenizer(br.readLine());

            int testCaseNum = Integer.parseInt(st.nextToken());
            int[] students = new int[20];
            int moves = 0;

            for (int i = 0; i < 20; i++) {
                int height = Integer.parseInt(st.nextToken());
                int pos = i;

                while (pos > 0 && height < students[pos - 1]) {
                    students[pos] = students[pos - 1];
                    moves++;
                    pos--;
                }

                students[pos] = height;
            }

            System.out.println(testCaseNum + " " + moves);
        }
    }
}
