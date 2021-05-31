 void solve(vector<vector<int>>& ans,vector<int>& A,int index,vector<int>& a)
    {
        if(index==A.size())
        {
            ans.push_back(a);
            return;
        }
        a.push_back(A[index]);
        solve(ans,A,index+1,a);
        a.pop_back();
        solve(ans,A,index+1,a);
        
        
    }
    vector<vector<int> > subsets(vector<int>& A)
    {
        //code here
        
        vector<vector<int>> ans;
        int index=0;
        vector<int> a;
        solve(ans,A,index,a);
        sort(ans.begin(),ans.end());
        return ans;
    }