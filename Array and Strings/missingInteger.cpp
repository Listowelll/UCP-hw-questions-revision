#include <bits/stdc++.h>
using namespace std;


int missingInteger(vector<int>& input, int n)
{
 
    // 1 2 3 4 6 7
    if(input.size()!=n)
    {
    for(int i =0; i<input.size(); i++)
    {
        if(i+1<input.size())
        {
            int diff = input[i+1]-input[i];
             if(diff==2)
        {
            return input[i]+1;
        }
        }
        
        if(i==input.size()-1) return input[i]+1;
        
       
    }
    }
    
    return 0;
}



int main()
{
    vector<int>nums = {1, 2, 3, 4, 5, 6, 7, 8, 10, 11, 12};
    cout<<missingInteger(nums, 12);
}



