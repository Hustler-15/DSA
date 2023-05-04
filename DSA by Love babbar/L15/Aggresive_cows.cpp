#include<iostream>
#include<vector>
using namespace std;
bool isPossible(vector<int> &stalls,int k,int mid)
{
    int cowcount = 1;
    int lastposition = stalls[0];
    for(int i =0;i<stalls.size();i++)
    {
        if(stalls[i]-lastposition>=mid)
        {
            cowcount++;
            if(cowcount == k)
            {
                return true;
            }
            lastposition = stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{   sort(stalls.begin(),stalls.end());
    int s = 0;
    int maxi = -1;
    int ans = -1;
    for(int i = 0;i<stalls.size();i++)
    {
        maxi = max(maxi,stalls[i]);
    }
    int e = maxi;
    
    int mid  = s+(e-s)/2; 
    while(s<=e)
    {
        if (isPossible(stalls,k,mid))
        {
            ans = mid;
            s=mid+1;
        }
        else
        {
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

https://www.codingninjas.com/codestudio/problems/aggressive-cows_1082559?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0