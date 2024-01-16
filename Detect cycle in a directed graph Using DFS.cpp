link-->https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1
Q.Detect cycle in a directed graph
code-->
      bool cyclicDFS(int node, unordered_map<int , bool> &visited,unordered_map<int , bool> &dfsvisited ,vector<int> adj[]){
        visited[node]=true;
        dfsvisited[node]=true;
        for(auto ne : adj[node]){
            if(!visited[ne]){
                
                if(cyclicDFS(ne , visited , dfsvisited , adj)){
                    return true;
                }
                
            }
            else if (dfsvisited[ne]){
                    return true;
            }
        }
        dfsvisited[node]=false;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        unordered_map<int , bool> visited;
        unordered_map<int , bool> dfsvisited;
        for (int i=0;i<V;i++){
            if(!visited[i]){
              
               if(cyclicDFS(i , visited , dfsvisited , adj)){
                   return true;
               }
            }
        }
        return false;
        
    }
