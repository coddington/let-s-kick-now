#include <bits/stdc++.h>
using namespace std;

bool bipartiteBfs(int src, vector<int> adj[], int color[]) {

    color[src]=1;
    queue<int> q;
    q.push(src);

    while(!q.empty()){
        int ptr=q.front();
        q.pop();


        for(auto x:ptr){
            if(color[x]==-1){
                color[x]=1-color[ptr];
                q.push(x);
            }
            else if(color[x]!=-1 && color[x]==color[ptr]){
                return false;
            }
        }
    }
    return true;


    
}
bool checkBipartite(vector<int> adj[], int n) {

    int color[n];
    memset(color,-1,sizeof(color));

    for(int i=1;i<=n;++i){
        if(color[i]==-1)
        {
            if(bipartitebfs(i,adj,color)==false){
                rerun false;
            }
        }
    }
    return true;
   
}
int main() {
	int n, m;
	cin >> n >> m;
	vector<int> adj[n];
	for(int i = 0;i<m;i++) {
	    int u, v;
	    cin >> u >> v;
	    adj[u].push_back(v); 
	    adj[v].push_back(u); 
	}
	
	if(checkBipartite(adj, n)) {
	    cout << "yes"; 
	} else {
	    cout << "No"; 
	}
	return 0;
}

/*
8 7 
0 1 
1 2 
2 3 
3 4 
4 6 
6 7 
1 7
4 5 

// bipartite graph example 
*/ 

/*
7 7 
0 1 
1 2 
2 3 
3 4 
4 6 
6 1
4 5 
// not bipartite example
*/
