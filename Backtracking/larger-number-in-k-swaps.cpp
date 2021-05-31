
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#include <map>

#define ll long long
typedef pair<ll, pair<ll, ll>> ppi;
typedef pair<ll, ll> pi;
typedef pair<ll, string> psi;

#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(v.rbegin(), v.rend())
#define sp " "
#define nl "\n"
#define rep(i, n) for (ll i = 0; i < n; i++)
#define fst                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

solve(string& str, string& ans, int k,int cur)
{
    if(k==0){
        return;
    }

    char max=str[cur];
    for(int i=cur+1;i<str.size();++i)
    {
        if(max>str[i])
        {
            max=str[i];
        }
    }

    if(max!=str[cur])///it is important for cases of duplicates
    {
        k--;
    }

    for(int i=cur;i<str.size();++i)
    {
        if(str[i]==max)
        {
            swap(str[cur],str[i]);
            if(ans.compare(str)>0)
            {
                ans=str;
            }
            solve(str,ans,k,cur+1);
            swap(str[cur],str[i]);


        }

    }
}

//toc: o(n^k)

