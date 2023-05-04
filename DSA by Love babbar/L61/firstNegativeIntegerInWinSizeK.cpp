#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
    
    deque<long long int> dq;
    vector<long long int> ans;
    
    //Process first window K size
    
    for(int i=0;i<K;i++)
    {
        if(A[i]<0)
        {
            dq.push_back(i);
        }
    }
    
    //Store the answer of first k size window
    if(dq.size()>0)
    {
        ans.push_back(A[dq.front()]);
    }
    else{
        ans.push_back(0);
    }
    
    //Process for remaining windows
    for(int i = K;i<N;i++)
    {   //removal
        if(!dq.empty() && i-dq.front()>=K)
        {
            dq.pop_front();
        }
        
        // Addition
        if(A[i]<0)
        {
            dq.push_back(i);
        }
        
        //Store the answer of first k size window
        if(dq.size()>0)
        {
            ans.push_back(A[dq.front()]);
        }
        else{
            ans.push_back(0);
        }
    }
    return ans;
 }
 //https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1