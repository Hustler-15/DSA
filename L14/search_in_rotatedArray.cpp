#include <iostream>
#include<vector>
using namespace std;
int getpivot(vector<int>& arr,int size)
{
    int s = 0, e = size-1;
    int mid = s+(e-s)/2;

    while(s<e)
    {
        if (arr[mid]>=arr[0])
        {
            s = mid+1;
        }
        else
        {
           e = mid;
        }

        mid =  s+(e-s)/2;   
    }
    return s;
};

int binarysearch(vector<int>& arr,int s,int e,int key)
{
    int start = s;
    int end = e;
    int mid = start+(end-start)/2;  //optimization for max integer value 
    while(start<=end)
    {
        

        if (arr[mid]==key)
        {
            
            return mid;
            
        }

        if(key>arr[mid])
        {
            start = mid+1;
        
        }
        else
        {
           end = mid-1;
        }
        mid = start+(end-start)/2;
        
   
} return -1;
};

int findPosition(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot = getpivot(arr, n);
    if(k>=arr[pivot] && k<=arr[n-1])
    {
        return binarysearch(arr,pivot,n-1,k);
    }
    else
    {
        return binarysearch(arr,0,pivot-1,k);
    }
}

//https://www.codingninjas.com/codestudio/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0

