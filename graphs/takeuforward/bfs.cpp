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

int main()
{
    vector<bool> vis(n+1,0);
    vector<int> bfs;
  
    for(int i=1;i<=n;++i){
        if(vis[i]==0)
        {
            queue<int> q;
            q.push(i);
            vis[i]=1;
            while(!q.empty()){
                int node=q.front();q.pop();
                bfs.push_back(node);
                for(auto x:adj[node]){
                    if(vis[x]==0){
                        q.push(x);
                        vis[x]=1;
                    }
                }

            }
        }
    }
    return bfs;



  
}
