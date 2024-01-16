link-->https://www.geeksforgeeks.org/problems/topological-sort/1
Q.Topological sort
Code-->
  void topoDFS(int node , stack<int>&s ,  unordered_map<int , bool>&visited , vector<int> adj[]){
	    visited[node]=true;
	    for(auto ne: adj[node]){
	        if(!visited[ne]){
	            topoDFS(ne , s , visited , adj);
	        }
	        
	    }
	    s.push(node);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    unordered_map<int , bool>visited;
	    stack<int>s;
	    for (int i=0;i<V;i++){
	        if(!visited[i]){
	            topoDFS(i , s,visited , adj);
	        }
	    }
	    vector<int>ans;
	    while(!s.empty()){
	        ans.push_back(s.top());
	        s.pop();
	    }
	    return ans;
  }
  Expected Time Complexity: O(V + E).
Expected Auxiliary Space: O(V).
  
