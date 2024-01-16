link-->https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1
Q.DFS of Graph
code-->
void dfs(int node , unordered_map<int , bool>&visited , vector<int>adj[] , vector<int>&ans ){
        ans.push_back(node);
        visited[node]=true;
        
        for(auto i:adj[node]){
            if(!visited[i]){
                dfs(i , visited , adj , ans);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>ans;
        unordered_map<int , bool>visited;
        for (int i=0;i<V;i++){
            if(!visited[i]){
                dfs(i , visited , adj ,ans );
                
            }
        }
        return ans;
    }

Expected Time Complexity: O(V + E)
Expected Auxiliary Space: O(V)
