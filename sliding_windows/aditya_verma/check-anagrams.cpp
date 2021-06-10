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
    string arr="forghrfothrofrfoforfrojky"; //forghrfothrofrfoforfrojky

    //total angrams: 8
    string ptr="for";

    int i=0;
    int k=ptr.size();
    int j=0;
    unordered_map<char,int> mpp;

    for(int i=0;i<ptr.size();++i){
        mpp[ptr[i]]++;
    }

    int count=mpp.size(); ////number of distinct characters
    int ans=0;

    while(j<arr.size())
    {
        //calculation: o

        if(mpp.find(arr[j])!=mpp.end())
        {
            mpp[arr[j]]--;
            if(mpp[arr[j]]==0)
            {
                
                count--;
                cout<<count<<"\n";
            }
        }

        //basic cond:


        if(j-i+1<k)
        {
            j++;
        }

        //slide

        else if(j-i+1==k)
        {
            if(count==0)
            {

                ans++;
                cout<<arr.substr(i,j-i+1)<<"\n";
                
                
            }
            if(mpp.find(arr[i])!=mpp.end())
            {
                mpp[arr[i]]++;
                if(mpp[arr[i]]==1)
                {
                     count++;
                }
            }
            i++;
            j++;
        }

    }
    cout<<"ans"<<ans<<" ";

  
}
