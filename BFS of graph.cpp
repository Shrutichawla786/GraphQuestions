link-->https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1
Q.BFS of graph
code-->
  vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>ans;
        unordered_map<int , bool>visited;
        int node =0;
        queue<int>q;
        q.push(node);
        visited[node]=true;
        while(!q.empty()){
            int frontNode= q.front();
            q.pop();
            ans.push_back(frontNode);
            
            for ( auto child: adj[frontNode]){
                if(!visited[child]){
                    q.push(child);
                    visited[child]=true;
                }
            }
            
        }
        return ans;
        
    }

Expected Time Complexity: O(V + E)
Expected Auxiliary Space: O(V)
