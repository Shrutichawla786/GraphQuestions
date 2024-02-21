Q.Find the number of islands
link-->https://www.geeksforgeeks.org/problems/find-the-number-of-islands/1
code-->void bfs(int i ,int j ,vector<vector<int>>&vis ,vector<vector<char>>&grid ){
        vis[i][j]=1;
        queue<pair<int , int>>q;
        q.push({i ,j});
        while(!q.empty()){
            int i=q.front().first;
            int j= q.front().second;
            q.pop();
            int n= grid.size();
            int m= grid[0].size();
            
            for(int delrow=-1;delrow<=1;delrow++){
                for(int delcol=-1;delcol<=1;delcol++){
                    int nrow=i+delrow;
                    int ncol= j+delcol;
                     
                    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1' && !vis[nrow][ncol]){
                        vis[nrow][ncol]=1;
                        q.push({nrow , ncol});
                    }
                }
            }
            
            
        }
        
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size();
        int m= grid[0].size();
        int count=0;

        vector<vector<int>>vis( n , vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    count++;
                    bfs(i , j ,vis , grid);
                }
            }
        }
        return count;
    }
Expected Time Complexity: O(n*m)
Expected Space Complexity: O(n*m)
