#include<bits/stdc++.h>
using namespace std;

int BackSpace(string first , string second)
{
   stack<char>one;
   stack<char>two;
   
   for(int i=0; i<first.size(); i++)
   {
       if(first[i]!='#')one.push(first[i]);
       
       else one.pop();
   }
   
   for(int i=0; i<second.size(); i++)
   {
       if(second[i]!='#')two.push(second[i]);
       
       else two.pop();
   }
   
   return one == two;
   
}
int main()
{
    cout<<BackSpace("abcdef###xyz", "abcw#xyz");
    return 0;
}
