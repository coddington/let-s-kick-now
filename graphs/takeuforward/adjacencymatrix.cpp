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

    edge={{1,2},{2,3},{3,4},{4,5},{1,5},{2,5},{3,5}};
    vector<vector<int>> adjmat(n+1,vector<int>(n+1,0));

    for(int i=0;i<m;++i){
        int u=edge[i][0];
        int v=edge[i][1];

        adjmat[u][v]=1;
        adjmat[v][u]=1;
    }




  
}
