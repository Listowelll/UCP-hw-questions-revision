#include <bits/stdc++.h>
using namespace std;


bool KAnagrams(string first, string second, int k)
{


unordered_map<char,int>mp;
int count =0;
for(char el : first)
{
    mp[el]++;
}


for(char el : second)
{
    
    if(mp.count(el))
    {
        mp[el]--;
    }
        
}


for(auto el : mp)
{
    count+=el.second;
}

return count == k;

}



int main()
{
   cout<<KAnagrams("debit curd", "bad credit", 2);
}
