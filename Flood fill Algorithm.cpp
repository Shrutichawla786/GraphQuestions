Q.Flood fill Algorithm
linnk-->https://geeksforgeeks.org/problems/flood-fill-algorithm1856/1
code->void dfs(int sr , int sc ,int  newcolor, int inicolor ,vector<vector<int>>& image,vector<vector<int>>&ans ,int delRow[] , int delCol[] ){
        ans[sr][sc]=newcolor;
        int n =image.size();
        int m = image[0].size();
        for(int i=0;i<4;i++){
            int nrow= sr+delRow[i];
            int ncol= sc+delCol[i];
            if((nrow>=0&& nrow<n)&&(ncol>=0 && ncol<m) && image[nrow][ncol]==inicolor && ans[nrow][ncol]!=newcolor){
                dfs(nrow , ncol , newcolor , inicolor , image , ans , delRow , delCol);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
        // Code here 
        int inicolor= image[sr][sc];
        vector<vector<int>>ans=image;
        int delRow[]={-1 , 0 ,1 ,0};
        int delCol[]={0 , 1 , 0 ,-1};
        dfs(sr , sc , newcolor , inicolor , image , ans , delRow , delCol);
        return ans;
    }
Expected Time Compelxity: O(n*m)
Expected Space Complexity: O(n*m)
