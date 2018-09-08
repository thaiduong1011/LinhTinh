/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package thuattoanbfs;

import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author SunShine
 */
public class ThuatToanBFS {

    char[] arrayTop = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    int n = arrayTop.length;
    int[][] arrayEdge;
    int[] color;
    int[] queue;
    
    public ThuatToanBFS(){
        Init();
        
        queue = new int[n];
        for (int u = 0; u < n; u++) {
            if (color[u] == -1) {
                BFS(u);
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
    
    public void BFS(int v){
        int u, startQ, endQ;
        startQ = 0;
        endQ = 0;
        queue[endQ] = v;
        color[v] = 1;
        while(startQ <= endQ){
            u = queue[startQ];
            System.out.println(arrayTop[u]);
            startQ = startQ + 1;
            for (int i = 0; i < n; i++) {
                if (isConnected(i, u) && color[i] == -1) {
                    endQ++;
                    queue[endQ] = i;
                    color[i] = 1;
                }
            }
        }
    }
    
    public static void main(String[] args) {
        ThuatToanBFS bfs = new ThuatToanBFS();
        
//        List<Integer> list = new ArrayList<>();
//        list.add(1);
//        list.add(2);
//
//        for (Integer i : list){
//           // list.add(7);
//          //  System.out.print(i);
//        }
//        
//        
//        
    }
    
}
