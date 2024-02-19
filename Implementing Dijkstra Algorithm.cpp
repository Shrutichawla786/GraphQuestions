Q.Implementing Dijkstra Algorithm
link-->https://www.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1
code--> vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<int>dist(V);
        for(int i=0;i<V;i++){
            dist[i]=INT_MAX;
        }
        priority_queue <pair<int , int>,vector<pair<int , int>>,greater<pair<int , int>>> pq;
        dist[S]=0;
        pq.push({0,S});
        while(!pq.empty()){
            
            int nodeDistance= pq.top().first;
            int topNode= pq.top().second;
            pq.pop();
            
            for(auto neighbour:adj[topNode]){
                
                int adjdist=neighbour[1];
                int adjnode =neighbour[0];
                
                if(nodeDistance+adjdist < dist[adjnode]){
                    
                    dist[adjnode]=nodeDistance+adjdist;
                    pq.push({dist[adjnode] ,adjnode});
                }
                
            }
        }
        return dist;
    }
Expected Time Complexity: O(V^2).
Expected Auxiliary Space: O(V^2).
