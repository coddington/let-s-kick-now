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
    string s;
    cin >> s;
    int i = 0;
    int j = 0;
    vector<int> v;
    while (j < s.size())
    {
        if (j - i + 1 < 3)
            j++;
        else if (j - i + 1 == 3)
        {
            if (s.substr(i, 3) == "WUB")
            {
                v.push_back(i);
                i += 3;
                j = i;
                continue;
            }
            i++;
            j++;
        }
    }
    if(v.size()==0)
    {
        cout<<s;
        return 0;
    }
    string ans = "";
    ans+=s.substr(0,v[0]);
    if(v[0]!=0) ans+=' ';
    for (int i = 0; i < v.size() - 1; ++i)
    {
        ans += s.substr(v[i] + 3, v[i + 1] - v[i] - 3);
        if(v[i+1]-v[i]-3!=0) ans+=' ';
    }
    ans += s.substr(v[v.size() - 1] + 3);
    cout << ans;
    
}
