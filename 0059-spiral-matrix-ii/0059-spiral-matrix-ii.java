class Solution {
    public int[][] generateMatrix(int n) {
         int[][] matrix = new int[n][n];

        int sr = 0;
        int er = n - 1;
        int sc = 0;
        int ec = n - 1;

        int num = 1;

        while (sr <= er && sc <= ec) {

            // 1. First row: left to right
            for (int j = sc; j <= ec; j++) {
                matrix[sr][j] = num;
                num++;
            }
            sr++;

            // 2. Last column: top to bottom
            for (int i = sr; i <= er; i++) {
                matrix[i][ec] = num;
                num++;
            }
            ec--;

            // 3. Last row: right to left
            if (sr <= er) {
                for (int j = ec; j >= sc; j--) {
                    matrix[er][j] = num;
                    num++;
                }
                er--;
            }

            // 4. First column: bottom to top
            if (sc <= ec) {
                for (int i = er; i >= sr; i--) {
                    matrix[i][sc] = num;
                    num++;
                }
                sc++;
            }
        }

        return matrix;
    }
}