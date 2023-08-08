#include <bits/stdc++.h>
using namespace std;


string reverseVowels(string input)
{
    unordered_set<char>vowels = {'a', 'e', 'i', 'o', 'u'};
    int length = input.size();
    int first =0;
    int second = length -1;//7
    
    //"flamingo"
    if(length == 1) return input;
    while(first < second)
    {
        if(!vowels.count(tolower(input[first])))first++;//first = 4
        
        if(!vowels.count(tolower(input[second])))second--;//4
        
        else if(vowels.count(tolower(input[first])) && tolower(vowels.count(input[second])))
        {
            swap(input[first], input[second]);
            first++;//3
           
            second--;//6
            
            
        }
    }

    
  return input;
    
}

int main()
{
    string input = "xyz";
    cout<<reverseVowels(input);
    
    
    return 0;
}
