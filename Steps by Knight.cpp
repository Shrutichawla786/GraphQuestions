Q.Steps by Knight
link-->https://www.geeksforgeeks.org/problems/steps-by-knight5927/1
code-->
  int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int n)
	{
	    // Code here
	    int x1= KnightPos[0];
	    int y1=KnightPos[1];
	    int x2=TargetPos[0];
	    int y2=TargetPos[1];
	    int a[1001][1001];
	    
	    if(x1==x2 && y1==y2){
	        return 0;
	    }
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            a[i][j]=0;
	        }
	        
	    }
	    queue<pair<int ,int>> q;
	    q.push(make_pair(x1-1 ,y1-1));
	   
	    while(!q.empty()){
	        auto curr= q.front();
	        int i= curr.first;
	        int j= curr.second;
	        q.pop();
	        if((i+1)>=0 && i+1<n && (j+2)>=0 && (j+2)<n && a[i+1][j+2]==0){
	            a[i+1][j+2]= a[i][j]+1;
	            q.push(make_pair(i+1 , j+2));
	        }
	        if((i-1)>=0 && i-1<n && (j+2)>=0 && (j+2)<n && a[i-1][j+2]==0){
	            a[i-1][j+2]= a[i][j]+1;
	            q.push(make_pair(i-1 , j+2));
	        }
	        if((i-2)>=0 && i-2<n && (j+1)>=0 && (j+1)<n && a[i-2][j+1]==0){
	            a[i-2][j+1]= a[i][j]+1;
	            q.push(make_pair(i-2 , j+1));
	        }
	        if((i+2)>=0 && i+2<n && (j+1)>=0 && (j+1)<n && a[i+2][j+1]==0){
	            a[i+2][j+1]= a[i][j]+1;
	            q.push(make_pair(i+2 , j+1));
	        }
	        if((i-1)>=0 && i-1<n && (j-2)>=0 && (j-2)<n && a[i-1][j-2]==0){
	            a[i-1][j-2]= a[i][j]+1;
	            q.push(make_pair(i-1 , j-2));
	        }
	        if((i+1)>=0 && i+1<n && (j-2)>=0 && (j-2)<n && a[i+1][j-2]==0){
	            a[i+1][j-2]= a[i][j]+1;
	            q.push(make_pair(i+1 , j-2));
	        }
	        if((i-2)>=0 && i-2<n && (j-1)>=0 && (j-1)<n && a[i-2][j-1]==0){
	            a[i-2][j-1]= a[i][j]+1;
	            q.push(make_pair(i-2, j-1));
	        }
	        if((i+2)>=0 && i+2<n && (j-1)>=0 && (j-1)<n && a[i+2][j-1]==0){
	            a[i+2][j-1]= a[i][j]+1;
	            q.push(make_pair(i+2 , j-1));
	        }
	    }
	 return(a[x2-1][y2-1]);
	    
	}

Expected Time Complexity: O(N2).
Expected Auxiliary Space: O(N2).
