#include<iostream>
#include<vector>
using namespace std;
bool isPossible(vector<int> chapter, int m,int n,int mid)
{
    int dayscount = 1;
    int time = 0;
    
    for(int i = 0;i<m;i++)
    {
        if(time+chapter[i]<=mid)
        {
            time+=chapter[i];
        }
        
        else
        {
            dayscount++;
            if(dayscount>n || chapter[i]>mid)
            {
                return false;
            }
            
            time = chapter[i];
        }
    }
    return true;
}
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	// Write your code here.
    int s = 0;
    int sum = 0;
    int ans = -1;
    for(int i = 0;i<m;i++)
    {
        sum +=time[i];
    }
    int e = sum;
    
    int mid = s+(e-s)/2;
    
    while(s<=e)
    {
        if (isPossible(time,m,n,mid))
        {
           ans = mid;
            e = mid-1;
        }
        
        else
        {
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
