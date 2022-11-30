#include<iostream>
using namespace std;

int countDistinctWays(int nStairs) {
    //Base Case
    if(nStairs<0)
    {
        return 0;
    }
    
    if(nStairs == 0)
    {
        return 1;
    }
    
    //Recursive call
    int ans = countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2);
        
    return ans;
}
//https://www.codingninjas.com/codestudio/problems/count-ways-to-reach-nth-stairs_798650?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_10