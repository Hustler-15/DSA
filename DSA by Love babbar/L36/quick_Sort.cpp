#include<iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];

    int cnt = 0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot)
        {
            cnt++;
        }
    }
    //place pivot on right position
    int pivotIndex = s+cnt;
    swap(arr[s],arr[pivotIndex]);
    
    //Handling left and right part
    int i = s;
    int j = e;
    while(i<pivotIndex && j>pivotIndex)
    {
        while(arr[i]<=arr[pivotIndex])
        {
            i++;
        }

        while(arr[j]>arr[pivotIndex])
        {
            j--;
        }
        if(i<pivotIndex && j>pivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
    }

void quickSort(int arr[], int s, int e)
{   //Base case
    if(s>=e)
    {
        return;
    }

    //Partition
    int p = partition(arr,  s,  e);

    //left side of the element
    quickSort(arr, s, p-1);

    //Right side of the element
    quickSort(arr, p+1, e);
}
//https://www.codingninjas.com/codestudio/problems/quick-sort_983625?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_15