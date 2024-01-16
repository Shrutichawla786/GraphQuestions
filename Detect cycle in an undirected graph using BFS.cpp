Link-->https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
Q.Detect cycle in an undirected graph
code-->  bool cyclic(int i ,unordered_map<int , bool>&visited,vector<int> adj[]){
        unordered_map<int , int>parent;
        parent[i]=-1;
        visited[i]=1;
        queue<int>q;
        q.push(i);
        while(!q.empty()){
            int front= q.front();
            q.pop();
            
            for(auto ne:adj[front]){
                if(visited[ne]==true && ne!=parent[front]){
                    return true;
                }
                else if(visited[ne]==false){
                    q.push(ne);
                    visited[ne]=true;
                    parent[ne]=front;
                }
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        unordered_map<int , bool>visited;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                
                bool ans= cyclic( i , visited , adj);
                if(ans==1){
                    return true;
                }
            }
        }
        return false;
    }
Expected Time Complexity: O(V + E)
Expected Space Complexity: O(V)
  
