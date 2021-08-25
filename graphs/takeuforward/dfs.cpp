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

void dfs(int i,vector<vector<int>> adl,vector<int> store,vector<int> vis){


    store.push_back(i);
    vis[i]=1;
    for(auto x:adl[i]){
        if(!vis[x])
        {
            dfs(x,adl,store,vis);
        }
    }
    return;
}
int main()
{
    vector<int> storedfs;
    vector<int> vis(n+1,0);
    for(int i=1;i<=n;++i){
        if(!vis[i]){
            dfs(i,adjacencylist,storedfs,vis);
        }

    }
    
}
