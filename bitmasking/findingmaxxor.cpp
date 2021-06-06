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

   int findmsb(int n)
    {
        int m=0;
        while(n>0)
        {
            n=(n>>1);
            
            m++;
           
        }
        return m;
    }

int main()
{
    set<string> a;
    a.insert("oops");
    for(auto x:a){
        cout<<x;
    }
}

/*
wherever we used po we can use :

1<<i-> 2^i

*/