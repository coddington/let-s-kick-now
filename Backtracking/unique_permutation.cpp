/*
Given an array nums[] of size N, the task is to print all possible distinct permutations of the array nums[] (including duplicates).



Input: nums[] = { 1, 2, 2 }
Output: 
1 2 1
2 1 2
2 2 1




Input: nums[] = { 1, 1 }
Output: 1 1*/


void solve(vector<vector<int>& ans, vector<int> nums,vector<int>& temp,vector<bool> used)
{
    if(temp.size()==nums.size()){
        ans.push_back(temp);return;
    }

    for(int i=0;i<nums.size();++i)
    {
        if(used[i])
        {
            continue;
        }
        used[i]=true;
        temp.push_back(nums[i]);
        solve(ans,nums,temp,used);
        temp.pop_back();
        used[i]=false;
        while(i+1<nums.size() && nums[i]==nums[i+1]){
            i++;
        }
    }
    
    
}