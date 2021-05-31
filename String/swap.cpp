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

int main()
{

//     string n = "-13";
//     int y = 9;
//     string x=to_string(y);
    

//   string temp=

//     for (int i = 0; i < n.size(); ++i)
//     {

//         string t = n.substr(0, i + 1) + x + n.substr(i + 1);
//         cout << t << "\n";
//         if (stoi(t) > ans)
//         {
//             ans = stoi(t);
//         }
//     }
//     cout << ans;

  string a="-28824579515";

  long long int k=0;
  for(int i=0;i<a.size();++i)
  {
      k=k*10+a[i]-'0';
  }
  cout<<k;
}
