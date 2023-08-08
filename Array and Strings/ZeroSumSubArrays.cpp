#include<bits/stdc++.h>
using namespace std;

int ZeroSum(vector<int>& nums)
{
    unordered_map<int,int>mp;
    int sum =0;
    int length = nums.size();
    int count=0;
    
    for(int &num : nums)
    {
        sum+=num;
        int ref = sum - 0;
        
        if(sum == 0)count++;
        
        if(mp.count(ref))
        {
            count++;
        }
        mp[sum]++;
    }
    
    return count;
}
int main()
{
    vector<int>nums = {1, 8, 7, 3, 11, 9};
    cout<<ZeroSum(nums);
    return 0;
}
