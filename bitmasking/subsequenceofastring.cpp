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
#define rep(i,n) for(int i=0;i<n;i++)
#define fst ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve(vector<string>& ans,string& s,string a,int i){

    
    {int j=0;
    while(i)
        if((i&1))
        {
            s.push_back(a[j]);
            
            
        }
        i=i>>1;
        j++;
    }
    ans.push_back(s);return;
}

int main()
{
    string a="abc";
    vector<string> ans;
    string s;
    int n=a.size();
    int range=pow(2,n)-1;
    for(int i=0;i<=range;++i){
        s="";
        solve(ans,s,a,i);
    }
    for(auto x:ans){
        cout<<x<<"\n";
    }
}