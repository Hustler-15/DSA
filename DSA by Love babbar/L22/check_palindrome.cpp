#include<iostream>
using namespace std;
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
bool checkPalindrome(string s)
{    int st = 0,ed = s.size()-1;
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


//https://www.codingninjas.com/codestudio/problems/check-if-the-string-is-a-palindrome_1062633?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5