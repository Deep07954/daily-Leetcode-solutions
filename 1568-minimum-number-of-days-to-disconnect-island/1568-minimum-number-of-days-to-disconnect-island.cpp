
class Solution {
public:
    // Counts how many separate islands exist in the grid.
    int countIslands(vector<vector<int>>& grid) {
        // Store the number of rows.
        int rows = grid.size();
        
        // Store the number of columns.
        int cols = grid[0].size();
        
        // Create a visited matrix to avoid revisiting land cells.
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));
        
        // Define the four possible movement directions.
        int directions[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        
        // Initialize the island count.
        int islands = 0;
        
        // Traverse every cell in the grid.
        for (int i = 0; i < rows; i++) {
            // Traverse every column in the current row.
            for (int j = 0; j < cols; j++) {
                // Start DFS when an unvisited land cell is found.
                if (grid[i][j] == 1 && !visited[i][j]) {
                    // One new connected component means one island.
                    islands++;
                    
                    // Use a stack for iterative DFS.
                    stack<pair<int, int>> st;
                    
                    // Push the starting land cell.
                    st.push({i, j});
                    
                    // Mark it visited immediately.
                    visited[i][j] = true;
                    
                    // Visit all connected land cells.
                    while (!st.empty()) {
                        // Get the current cell.
                        auto [r, c] = st.top();
                        
                        // Remove it from the stack.
                        st.pop();
                        
                        // Check all four neighboring cells.
                        for (auto& direction : directions) {
                            // Compute neighbor row.
                            int nr = r + direction[0];
                            
                            // Compute neighbor column.
                            int nc = c + direction[1];
                            
                            // Visit valid, unvisited land neighbors.
                            if (nr >= 0 && nr < rows && nc >= 0 && nc < cols &&
                                grid[nr][nc] == 1 && !visited[nr][nc]) {
                                // Mark the neighbor as visited.
                                visited[nr][nc] = true;
                                
                                // Add it for future exploration.
                                st.push({nr, nc});
                            }
                        }
                    }
                }
            }
        }
        
        // Return the total number of islands.
        return islands;
    }
    
    int minDays(vector<vector<int>>& grid) {
        // If already disconnected or has no islands, no removal is needed.
        if (countIslands(grid) != 1) {
            return 0;
        }
        
        // Store grid dimensions.
        int rows = grid.size();
        int cols = grid[0].size();
        
        // Try removing every land cell once.
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                // Only land cells can be removed.
                if (grid[i][j] == 1) {
                    // Temporarily convert this land cell into water.
                    grid[i][j] = 0;
                    
                    // If removal disconnects the grid, one day is enough.
                    if (countIslands(grid) != 1) {
                        return 1;
                    }
                    
                    // Restore the cell before trying another removal.
                    grid[i][j] = 1;
                }
            }
        }
        
        // If zero or one removal cannot work, the answer is always two.
        return 2;
    }
};