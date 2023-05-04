#include<iostream>
#include<string>
using namespace std;
class Solution {
private:
bool valid(char ch)
{
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9'))
    {
        return 1;
    }
    return 0;
}
char toLowerCase(char ch)
{
    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
    {
        return ch;
    }
    else{
        char temp = ch-'A'+'a';
        return temp;
    }
}
public:
    bool isPalindrome(string s) {
      int st = 0,ed = s.size()-1;
     while(st<=ed)
     {  if(valid(s[st]) && valid(s[ed]))
         {
              if(toLowerCase(s[st])!=toLowerCase(s[ed]))
             {
                 return 0;
             }
         st++;
         ed--;
         }
     
        else if(!(valid(s[ed])))
        {
            ed--;
        }
        else if(!(valid(s[st])) )
                {
                    st++;
                }        
         else
         {
             st++;
             ed--;
         }
     }
     
 return 1;
}
};  
//https://leetcode.com/problems/valid-palindrome/submissions/