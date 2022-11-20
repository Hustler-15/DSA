#include<iostream>
#include<string>
using namespace std;
class Solution {
private:
    bool valid(char ch)
{
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='B') || (ch>='0' && ch<='9'))
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
    bool checkpalindrome(string s)
    {
        int st = 0;
        int ed = s.length()-1;
        while(st<=ed)
        {
            if(s[st]!= s[ed])
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
public:
    bool isPalindrome(string s) {
        //remove special characters
        string temp = "";
        for(int j = 0;j<s.length();j++)
        {
            if(valid(s[j]))
            {
                temp.push_back(s[j]);
            }
        }
        //to lower case
        for(int j = 0;j<temp.length();j++)
        {
            temp[j] = toLowerCase(temp[j]);
        }
        return checkpalindrome(temp);
    }
};
//https://leetcode.com/problems/valid-palindrome/submissions/