#include<iostream>
#include<stack>
using namespace std;

bool isValidParenthesis(string expression)
{
    stack<char> s;
    
    for(int i = 0;i<expression.length();i++)
    {    char ch = expression[i];
        //if opening bracket then push
        if(ch == '[' || ch == '{' || ch == '(')
        {
            s.push(ch);
        }
     else{
         if(!s.empty())
         {
             char top = s.top();
             if((ch == ')' && top == '(') ||
                (ch == ']' && top == '[' )||
                (ch == '}' && top == '{'))
             {
                 s.pop();
             }
             else
             {
                 return false;
             }
         }
         else
         {
             return false;
         }
     }
    }
     if(s.empty())
     {
         return true;
     }
     else 
     {
         return false;
     }
    
}
//https://www.codingninjas.com/codestudio/problems/valid-parenthesis_795104?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1