#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &s,int x)
{
     //Base case
    if(s.empty())
    {
        s.push(x);
        return;
    }
    
    int num = s.top();
    s.pop();
    //Recursive call
    insertAtBottom(s,x);
    
    s.push(num);
}
void reverseStack(stack<int> &stack) {
    //Base case
    if(stack.empty())
    {
        return;
    }
    int num = stack.top();
    stack.pop();
    //Recursive call
    reverseStack(stack);
    
    insertAtBottom(stack, num);
    
}
//https://www.codingninjas.com/codestudio/problems/reverse-stack-using-recursion_631875?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1