class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        
        unordered_map<string,vector<string>> mpp;
        for(int i=0;i<s.size();++i)
        {
            string str=s[i];
            sort(str.begin(),str.end());
            mpp[str].push_back(s[i]);
        }
        vector<vector<string>> ans;
        for(auto x:mpp)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};
