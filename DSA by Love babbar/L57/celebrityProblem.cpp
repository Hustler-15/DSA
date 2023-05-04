#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class Solution 
{
    public:
    
    bool knows(vector<vector<int> >& M,int a,int b, int n)
    {
        if(M[a][b] == 1)
        {
            return 1;
        }
        else
        {
            return false;
        }
    }
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        //step1 : Put all the elements in stack
        stack<int> s;
        for(int i = 0;i<n;i++)
        {
            s.push(i);
        }
        //step2 : Get 2 elements and compare them
        while(s.size()>1)
        {
            int a = s.top();
            s.pop();
            
            int b = s.top();
            s.pop();
            
            if(knows(M,a,b,n))
            {
                s.push(b);
            }
            else
            {
                s.push(a);
            }
        }
        int ans = s.top();
        
        //step3 : Single element instack has potential to be a celebrity verify it
        bool rowCheck = false;
        int zeroCount = 0;
        
        for(int i = 0;i<n;i++)
        {
            if(M[ans][i] == 0)
            {
                zeroCount++;
            }
        }
        if(zeroCount == n)
        {
            rowCheck = true;
        }
        
        //Column check
        bool colCheck = false;
        int oneCount = 0;
        for(int i = 0;i<n;i++)
        {
            if(M[i][ans]==1)
            {
                oneCount++;
            }
        }
        if(oneCount == n-1)
        {
            colCheck = true;
        }
        
        if(rowCheck == true && colCheck == true)
        {
            return ans;
        }
        else
        {
            return -1;
        }
    }
};
//https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1