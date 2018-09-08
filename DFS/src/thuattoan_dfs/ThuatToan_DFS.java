package thuattoan_dfs;

import java.util.ArrayList;
import java.util.Vector;


public class ThuatToan_DFS {

    char[] arrayTop = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    int n = arrayTop.length;
    int[][] arrayEdge;
    int[] color;

    public ThuatToan_DFS() {
        Init();
        for (int u = 0; u < n; u++) {
            if (color[u] == -1) {
                DFS(0);
            }

        }
    }

    public void Init() {
        color = new int[n];
        for (int i = 0; i < n; i++) {
            color[i] = -1;
        }

        arrayEdge = new int[n][n];
        // 0 là các đỉnh chưa kết nối vs nhau, 1 là có kết nối
        arrayEdge[1][0] = arrayEdge[2][0] = arrayEdge[3][0] = 1;
        arrayEdge[3][2] = arrayEdge[4][2] = arrayEdge[5][2] = 1;
        arrayEdge[6][3] = arrayEdge[7][6] = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (arrayEdge[i][j] == 1) {
                    arrayEdge[j][i] = 1;
                } else if (arrayEdge[i][j] != 1) {
                    arrayEdge[i][j] = 0;
                }
            }
        }
    }

    public boolean isConnected(int indexA, int indexB) {
        if (indexA >= 0 && indexB >= 0 && indexA < n && indexB < n) {
            if (arrayEdge[indexA][indexB] == 1) {
                return true;
            }
        }

        return false;
    }

    
    void DFS(int v) {
        System.out.println(arrayTop[v]);
        color[v] = 1;
        for (int u = 0; u < n; u++) {
            if (isConnected(u, v) && color[u] == -1) {
                DFS(u);
            }
        }
    }

    public static void main(String[] args) {
        ThuatToan_DFS dfs = new ThuatToan_DFS();

    }

}
