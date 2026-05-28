class Solution {
public:
int m;
int n;
int result;
int nonobstackle;
void solve(vector<vector<int>>& grid,int count,int i,int j){
    if(i<0||i>=m||j<0||j>=n||grid[i][j]==-1){
        return;
    }
    if(grid[i][j]==2){
        if(count==nonobstackle){
            result++;
            return;
        }
    }
    int temp=grid[i][j];
    grid[i][j]=-1;
    //explore all directions
    //up
    solve(grid,count+1,i-1,j);
    //down
    solve(grid,count+1,i+1,j);
    //right
    solve(grid,count+1,i,j+1);
    //left
    solve(grid,count+1,i,j-1);
    grid[i][j]=temp;

}
    int uniquePathsIII(vector<vector<int>>& grid) {
        m=grid.size();
        n=grid[0].size();
        result=0;
        nonobstackle=0;
        int start_x=0;
        int start_y=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    nonobstackle++;
                }
                if(grid[i][j]==1){
                    start_x=i;
                    start_y=j;
                }
            }
        }
        nonobstackle+=1;
        int count=0;
        solve(grid,count,start_x,start_y);
        return result;
    }
};