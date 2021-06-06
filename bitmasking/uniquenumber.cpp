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
    vector<int> v = {1,5,6,7,5,6};

    int res = 0;
    for (int i = 0; i < v.size(); ++i)
    {
        res = (res ^ v[i]);
    }
    // cout << "res" << res << "\n";
    int temp = res;
    int bit = 0;

    while (temp)
    {

        if ((temp & 1))
        {
            break;
        }
        bit++;
        temp = (temp >> 1);
    }
    // cout<<"bit"<<bit<<nl;
    int mask = (1<<bit);
    int ans = 0;
    for (int i = 0; i < v.size(); ++i)
    {
        if ((mask & v[i]))
        {
            ans = (ans ^ v[i]);
        }
    }

    cout << ans << "\n";

    cout << (ans ^ res) << "\n";
}
