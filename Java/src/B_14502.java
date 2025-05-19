import java.util.*;

public class B_14502 {
    static int n, m;
    static int[][] map;
    static int maxSafeArea = 0;
    static List<int[]> emptySpaces = new ArrayList<>();
    static List<int[]> virusSources = new ArrayList<>();

    static int[] dx = {-1, 1, 0, 0};
    static int[] dy = {0, 0, -1, 1};

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        m = input.nextInt();

        map = new int[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                map[i][j] = input.nextInt();

                if (map[i][j] == 0) {
                    emptySpaces.add(new int[]{i, j});
                }
                if (map[i][j] == 2) {
                    virusSources.add((new int[]{i, j}));
                }
            }
        }

        for (int i = 0; i < emptySpaces.size(); i++) {
            for (int j = i + 1; j < emptySpaces.size(); j++) {
                for (int k = j + 1; k < emptySpaces.size(); k++) {
                    int[] a = emptySpaces.get(i);
                    int[] b = emptySpaces.get(j);
                    int[] c = emptySpaces.get(k);

                    int[][] copiedMap = copyMap(map);
                    copiedMap[a[0]][a[1]] = 1;
                    copiedMap[b[0]][b[1]] = 1;
                    copiedMap[c[0]][c[1]] = 1;

                    spreadVirus(copiedMap);

                    int safe = countSafe(copiedMap);
                    maxSafeArea = Math.max(maxSafeArea, safe);
                }
            }
        }

        System.out.println(maxSafeArea);
    }

    static int[][] copyMap(int[][] original) {
        int[][] copy = new int[n][m];

        for (int i = 0; i < n; i++) {
            copy[i] = Arrays.copyOf(original[i], m);
        }

        return copy;
    }

    static void spreadVirus(int[][] map) {
        Queue<int[]> q = new LinkedList<>();
        for (int[] v : virusSources) {
            q.add(new int[]{v[0], v[1]});
        }

        while (!q.isEmpty()) {
            int[] current = q.poll();

            for (int i = 0; i < 4; i++) {
                int nx = current[0] + dx[i];
                int ny = current[1] + dy[i];

                if (0 <= nx && nx < n && 0 <= ny && ny < m) {
                    if (map[nx][ny] == 0) {
                        map[nx][ny] = 2;
                        q.add(new int[]{nx, ny});
                    }
                }
            }
        }

    }

    static int countSafe(int map[][]) {
        int count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if(map[i][j] == 0){
                    count++;
                }
            }
        }

        return count;
    }
}