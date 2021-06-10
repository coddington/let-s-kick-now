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
    vector<int> arr={2,4,5,1,4,1,8};

    int k=3;
    int sum=0;
    int ans=INT_MIN;
    int i=0;int j=0;
    while(j<arr.size()){

        sum+=arr[j];
        if(j-i+1<k)
        {
            j++;
        }
        else if(j-i+1==k){
            ans=max(ans,sum);
            cout<<sum<<" ";
            sum-=arr[i];
            i++;
            j++;
            
        }
        

    }
    cout<<"\n";
    cout<<ans<<" ";
  
}
