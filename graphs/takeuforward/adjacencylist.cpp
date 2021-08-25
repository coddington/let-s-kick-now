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
    int n=5;
    int m=7;

    vector<int> adj[n+1];

    for(int i=1;i<=m;++i){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    //in case of weighted graphs
    vector<pair<int,int>> adj[n+1];

    int u,v,w;
    for(int i=1;i<=m;++i){
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

}
