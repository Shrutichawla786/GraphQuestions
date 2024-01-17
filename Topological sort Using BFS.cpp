Link-->https://www.geeksforgeeks.org/problems/topological-sort/1
Q.Topological sort using BSF
Code->//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
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
	    vector<int>ans;
	    while(!q.empty()){
	        int front= q.front();
	        q.pop();
	        ans.push_back(front);
	        
	        for(auto ne:adj[front]){
	            indegrees[ne]--;
	            if(indegrees[ne]==0){
	                q.push(ne);
	            }
	        }
	    }
	    
	    return ans;
	}
Expected Time Complexity: O(V + E).
Expected Auxiliary Space: O(V).
