#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#include <map>

typedef pair<int, pair<int, int>> ppi;
typedef pair<int, int> pi;
typedef pair<int, string> psi;
#define ll long long

#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(v.rbegin(), v.rend())
#define sp " "
#define nl "\n"
#define rep(i, n) for (int i = 0; i < n; i++)
#define fst                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);


bool cyclebfs(vector<int> adj[],int node,vector<bool>& vis){
    queue<pair<int,int>> q;

    q.push({node,-1});
    vis[node]=1;

    while(!q.empty()){

        int ptr=q.front.first;
        int parent_ptr=q.front.second;

        q.pop();

        for(auto x:ptr){
            if(!vis[x]){
                q.push({x,ptr});
                vis[x]=1;
            }else if(vis[x]==1 && parent_ptr!=x)
            {
                    return true;////got cycle
            }
        }
    }
    return false;


}

int main()
{
      int n=5;
    int m=7;

    vector<int> adj[n+1];

    for(int i=1;i<=m;++i){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    vector<bool> vis(n+1,0); //nodes=n

    for(int i=0;i<=n;++i){
        if(vis[i]==0)
        {
            if(cyclebfs(adj,i,vis))
            {
                return true;
            }
        }
    }
    
}
