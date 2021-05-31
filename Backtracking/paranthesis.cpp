
/*
Write a function to generate all possible n pairs of balanced parentheses. 




Examples: 


Input: n=1

Output: {}

Explantaion: This the only sequence of balanced 

parenthesis formed using 1 pair of balanced parenthesis. 



Input : n=2

Output: 

{}{}

{{}}

Explantaion: This the only two sequences of balanced 

parenthesis formed using 2 pair of balanced parenth*/
void solve(int n, int open, int close, vector<string>& ans, string s)
    {
        if(s.size()==2*n)
        {
            ans.push_back(s);
            return ;
        }
        if(open<n)
        {
            solve(n, open+1, close, ans, s+'(');
        }
        if(close<open)
        {
            solve(n, open, close+1, ans, s+')');
        }
        return;
        
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        int open=0;
        int close=0;
        vector<string> ans;
        string s;
        solve(n,open,close,ans,s);
        return ans;
        
    }