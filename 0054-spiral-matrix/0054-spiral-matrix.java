class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        List<Integer>res=new ArrayList<>();
        int n=matrix.length;
        int m=matrix[0].length;
        int sr=0;
        int er=n-1;
        int sc=0;
        int ec=m-1;
        while(sr<=er && sc<=ec){
            //firstrow
for(int j=sc;j<=ec;j++){
          res.add(matrix[sr][j]);
          }
          sr++;
          //lastcol
for(int j=sr;j<=er;j++){
          res.add(matrix[j][ec]);
          }
          ec--;
          //last row
          if(sr<=er){
          for(int j=ec;j>=sc;j--){
          res.add(matrix[er][j]);
          }
          er--;
          }
          if(sc<=ec){
          for(int j=er;j>=sr;j--){
          res.add(matrix[j][sc]);
          }
          sc++;
          }
        }
return res;
        
    }
}