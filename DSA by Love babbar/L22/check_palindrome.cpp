#include<iostream>
using namespace std;
char toLowerCase(char ch)
{
    if(ch>='a' && ch<='z')
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
     {  
        if(toLowerCase(s[st])!=toLowerCase(s[ed]))
         {
             return 0;
         }
         else
         {
         st++;
         ed--;
         }
     }
 return 1;
}