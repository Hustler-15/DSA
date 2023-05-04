#include<iostream>
using namespace std;

int findUnique(int *arr, int size)
{    int ans = 0;
    //Write your code here
    for(int i = 0;i<size;i++)
    {
        ans = ans^arr[i];
    }
   return ans;
}