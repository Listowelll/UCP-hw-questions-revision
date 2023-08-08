#include <iostream>


using namespace std;


double maxSubArray(vector<int>& nums, int k)
{
    // 4 5 -3 2 6 1.  k = 2
    int first=0;
    int second = k-1; // 1
    int length = nums.size(); // 6
    double maxMean = INT_MIN;
    switch(length)
    {
        case 0:
        return 0;
        
        case 1:
        return nums[0];
    }
    while(second < length)//1
    {
        double n = (second - first) + 1; // 2
        double sum =0;
        for(int i = first; i<=second; i++)// 0 1
        {
            sum+=nums[i];//9
        }
        
        double mean = sum/n; // 9/2 = 4.5
    
        maxMean = max(maxMean, mean);
        first++;
        second++;
    }
    
    
    
    return maxMean;
}

int main()
{
    vector<int>nums = {-4,4,5,5};
    int k = 2;
    cout<<maxSubArray(nums, k);
    
    return 0;
}
