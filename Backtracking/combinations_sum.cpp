void solve(vector<vector<int>>& ans, vector<int>& A, int n,int sum,vector<int>& a,int index)
    {
       if(index==A.size())
       {
        if(n==0)
        {
            ans.push_back(a);
            
        }
        return;
       }
       
        if(n-A[index]>=0 && index<A.size())
        {
            a.push_back(A[index]);
            solve(ans,A,n-A[index],sum,a,index);
           
            
            a.pop_back();
            
            
        }
        solve(ans,A,n,sum,a,index+1);
       
       
        
       
        
       
        }
        
        
    
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        
        vector<vector<int>> ans;
        sort(A.begin(),A.end());
        for(int i=0;i<A.size()-1;)
        {
            if(A[i]==A[i+1])
            {
                A.erase(A.begin()+i);
                
            }
            else
            {
                i++;
            }
        }
        int index=0;
        vector<int> a;
        int sum=0;
        solve(ans,A,B,sum,a,index);
        return ans;
        
    }