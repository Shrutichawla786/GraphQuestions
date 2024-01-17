link-->https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1
Q.Detect cycle in a directed graph
Code-->
  bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int>indegrees(V);
	    for(int i=0; i<V; i++){
           for(int u: adj[i])
             indegrees[u]++;
       }
	    
	    queue<int>q;
	    for(int i=0;i<V;i++){
	        if(indegrees[i]==0){
	            q.push(i);
	        }
	    }
	    int count=0;
	    while(!q.empty()){
	        int front= q.front();
	        q.pop();
	        count++;
	        
	        for(auto ne:adj[front]){
	            indegrees[ne]--;
	            if(indegrees[ne]==0){
	                q.push(ne);
	            }
	        }
	    }
	    if(count==V){
	        return false;
	    }
	    else{
	        return true;
	    }
	    
	}
Expected Time Complexity: O(V + E)
Expected Auxiliary Space: O(V)
  
