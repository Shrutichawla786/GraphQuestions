Link-->https://www.geeksforgeeks.org/problems/print-adjacency-list-1587115620/1?page=1&category=Graph&sortBy=submissions
Q.Print adjacency list
Code-->
vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
        // Code here
        vector<vector<int>>adj(V);
        for(auto i:edges){
            adj[i.first].push_back(i.second);
            adj[i.second].push_back(i.first);
        }
        return adj;
    }

Expected Time Complexity: O(V + E)
Expected Auxiliary Space: O(V + E)
