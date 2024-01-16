link-->https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
Q.Detect cycle in an undirected graph
Code-->
    bool cyclicDFS(int node , int parent ,unordered_map<int , bool>&visited,vector<int> adj[] ){
        visited[node]=true;
        for(auto ne : adj[node]){
            if(!visited[ne]){
               bool detect=cyclicDFS(ne , node , visited , adj);
               if(detect){
                   return true;
               }
               
            }
            else if ( ne!=parent){
                return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        unordered_map<int , bool>visited;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                
                bool ans= cyclicDFS( i ,-1, visited , adj);
                if(ans==1){
                    return true;
                }
            }
        }
        return false;
    }
Expected Time Complexity: O(V + E)
Expected Space Complexity: O(V)
