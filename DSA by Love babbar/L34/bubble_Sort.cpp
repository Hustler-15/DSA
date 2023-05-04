#include<iostream>
using namespace std;

void bubbleSort(int *arr, int n)
{
    //Base case
    if(n==0 ||n==1)
    {
        return;
    }
    for(int i=0;n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }

    //Recursive relation
    bubbleSort(arr, n-1);
}