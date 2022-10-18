#include<iostream>
#include<vector>
using namespace std;

int firstOcc(vector<int>& arr,int size,int key)
{
    int s=0, e=size-1;
    int ans=-1;
    int mid = s+(e-s)/2;
    while(s<=e)
    {
        if (arr[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }
        else if(key<arr[mid])
        {
            e=mid-1;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int lastOcc(vector<int>& arr,int size,int key)
{
    int s=0, e=size-1;
    int ans=-1;
    int mid = s+(e-s)/2;
    while(s<=e)
    {
        if (arr[mid]==key)
        {
            ans=mid;
            s=mid+1;
        }
        else if(key<arr[mid])
        {
            e=mid-1;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int, int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);
    
    return p;
}

//https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=1