#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>& myStack, int x)
{
     //Base case
    if(myStack.empty())
    {
        myStack.push(x);
        return;
    }
    
    int num = myStack.top();
    myStack.pop();
    //Recursive call
    solve(myStack,x);
    
    myStack.push(num);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
   
    solve(myStack,x);
    return myStack;
    
}
//https://www.codingninjas.com/codestudio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1