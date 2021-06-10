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
   string s="aaaa";

   int ans=0;
   unordered_map<char,int> mpp;
    int k=1;//unique characters
   int i=0;
   int j=0;
   while(j<s.size())
   {
       mpp[s[j]]++;

       if(mpp.size()<k)
       {
           j++;
       }
       else if(mpp.size()==k){
           ans=max(ans,j-i+1);
           j++;
       }
       else if(mpp.size()>k)
       {
           while(mpp.size()>k)
           {
               mpp[s[i]]--;
               if(mpp[s[i]]==0)
               {
                   mpp.erase(s[i]);
               }
               i++;

           }
           j++;
           
       }
   }
   cout<<ans;

  
}
   