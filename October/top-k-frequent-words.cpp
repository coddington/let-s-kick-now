#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#include <map>
#define ll long long
typedef pair<int, pair<int, int>> ppi;
typedef pair<int, int> pi;
typedef pair<string, int> psi;
#define ll long long
class Solution {
public:
      vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mpp;
        for (int i = 0; i < words.size();++i){
            mpp[words[i]]++;
        }

        priority_queue<psi,vector<psi>,myComp> maxh;
        for(auto x:mpp){
            maxh.push({x.first,x.second});
            if(maxh.size()>k)
                maxh.pop();
        }
        vector<string> v;
        while(maxh.size()!=0){
            v.push_back(maxh.top().first);
            maxh.pop();
        }
        reverse(v.begin(),v.end());
        return v;
        }
        
    
    struct myComp
    {
        bool operator()(pair<string, int> a, pair<string, int> b)
        {
            if(a.second == b.second) return (a.first < b.first);
            return a.second > b.second;
        }
    };
};
