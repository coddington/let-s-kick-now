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
    vector<int> v={4,1,1,2,1,3,2,5};
    int k=5;
    int i=0;
    int j=0;
    int size=0;
    int sum=0;
    while(j<v.size()){
       sum+=v[j];

       if(sum<k){
           j++;
       }

       else if(sum==k){
           size=max(size,j-i+1);
           j++;

       }

       else if(sum>k){
           while(sum>k)
           {
               sum-=v[i];
               i++;

           }
           j++;
       }


       

    }
    cout<<size<<" ";

  
}
   