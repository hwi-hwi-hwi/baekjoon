import java.io.BufferedReader;
import java.io.InputStreamReader;

public class B_1402 {

    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim());
        StringBuilder sb = new StringBuilder();

        while (t-- > 0) {
            br.readLine();
            sb.append("yes\n");
        }
        System.out.print(sb.toString());
    }
}