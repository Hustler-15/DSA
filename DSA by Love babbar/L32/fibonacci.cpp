#include<iostream>
using namespace std;

class Solution {
public:
    int fib(int n) {
        
        //Base Case
        if( n==0)
        {
            return 0;
        }
        
        if( n==1 )
        {
            return 1;
        }
        
        
        //Recursive relation
        int ans = fib(n-1) + fib(n-2);
        
        return ans;
    }
};
//https://leetcode.com/problems/fibonacci-number/submissions/