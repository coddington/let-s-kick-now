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
    vector<int> arr={20,-1,-7,8,-15,30,13,28};

   int i=0;
   int j=0;
   int k=3;
   list<int> l;

   while(j<arr.size()){
       if(arr[j]<0)
           {
            //    cout<<"ab "<<arr[j]<<" "<<"\n";
               l.push_back(arr[j]);
           }
       if(j-i+1<k)
       {
           
           j++;
       }
       else if(j-i+1==k)
       {

           
           if(l.empty())
           {
               cout<<0<<"\n";
           }
           else
           {
               if(l.front()==arr[i])
               {
                   cout<<l.front()<<"\n";
                   l.pop_front();
               }
               else 
               {
                   cout<<l.front()<<"\n";
               }
               
           }
           i++;
           j++;
       }
   }
  
}
