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
   vector<int> arr={1,3,-4,6,9,2,-1,0,8,1,7};
    vector<int> v;
   int i=0;
   int j=0;
   list<int> l;

    int k=3;
   while(j<arr.size())
   {
      

       while(!l.empty() && arr[j]>l.back())
       {
           l.pop_back();
       }
       l.push_back(arr[j]);

       if(j-i+1<k)
       {
           j++;
       }

       else if(j-i+1==k)
       {
           v.push_back(l.front());

           if(arr[i]==l.front())
           {
               l.pop_front();
           }
           i++;
           j++;
       }

   }
   for(int i=0;i<v.size();++i)
   {
       cout<<v[i]<<" ";
   }
  
}
