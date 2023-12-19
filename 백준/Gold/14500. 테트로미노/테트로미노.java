import java.io.*;
import java.util.*;

public class Main {

    static int n;
    static int m;
    static int map[][];
    static int visited[][];
    static int ans = 0;

    static int dy[] = {1, -1, 0, 0};
    static int dx[] = {0, 0, -1, 1};

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        n = Integer.parseInt(st.nextToken());
        m = Integer.parseInt(st.nextToken());

        map = new int[n][m];
        visited = new int[n][m];

        for (int i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < m; j++) {
                map[i][j] = Integer.parseInt(st.nextToken());
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                visited[i][j] = 1;
                dfs(i, j, 1, map[i][j]);
                visited[i][j] = 0;
            }
        }
        System.out.println(ans);
    }

    private static void dfs(int y, int x, int depth, int sum) {

        if (depth == 4) {
            ans = Math.max(sum, ans);
//            System.out.println(sum);
            return;
        }

        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (ny < n && nx < m && ny >= 0 && nx >= 0) {

                if (visited[ny][nx] == 0) {

                    if (depth == 2) {
                        visited[ny][nx] = 1;
                        dfs(y, x, depth + 1, sum + map[ny][nx]);
                        visited[ny][nx] = 0;
                    }

                    visited[ny][nx] = 1;
                    dfs(ny, nx, depth + 1, sum + map[ny][nx]);
                    visited[ny][nx] = 0;
                }


            }
        }
    }


}