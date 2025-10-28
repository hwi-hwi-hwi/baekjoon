import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;

public class B_13717 {

    static class Pokemon {
        String name;
        int needCandy;
        int haveCandy;

        static final int RETURN_CANDY = 2;

        Pokemon(String name, int needCandy, int haveCandy) {
            this.name = name;
            this.needCandy = needCandy;
            this.haveCandy = haveCandy;
        }

        int getEvolutions() {
            int evolutionCount = 0;
            int candy = haveCandy;

            while (candy >= needCandy) {
                evolutionCount++;
                candy -= needCandy;
                candy += RETURN_CANDY;
            }

            return evolutionCount;
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());

        List<Pokemon> pokedex = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            // k: i 번째 포켓몬이 진화에 필요한 사탕의 수
            // m: 지우가 가지고 있는 i 번째 포켓몬의 총 사탕의 수
            String name = br.readLine();
            StringTokenizer st = new StringTokenizer(br.readLine());
            int k = Integer.parseInt(st.nextToken());
            int m = Integer.parseInt(st.nextToken());

            pokedex.add(new Pokemon(name, k, m));
        }

        int totalEvolutions = 0;
        String bestPokemon = null;
        int maxEvolutions = -1;

        for (Pokemon p : pokedex) {
            int count = p.getEvolutions();
            totalEvolutions += count;

            if (count > maxEvolutions) {
                maxEvolutions = count;
                bestPokemon = p.name;
            }
        }

        System.out.println(totalEvolutions);
        System.out.println(bestPokemon);
    }
}
