class Solution {
public:
    string breakPalindrome(string s) {
        int n = s.size(); 
        if(n==1 || n==0)  
            return "";
        
        for(int i=0; i<n/2; i++) {
            if(s[i]!='a') {
                s[i] = 'a'; 
                return s;
            }
        }
        
        s[n-1] = 'b'; 
        return s;
    }
};
//the main hint of this ques is that we try to run loop to n/2 and not upto n because it will make Palindromic string for some cases like "aabaa"