#include<iostream>
#include<vector>
using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    vector<int> ans;
    for(int col=0;col<mCols;col++)
    {
        if(col&1)
        {
            //odd case ->bottom to up
            for(int row=nRows-1;row>=0;row--)
            {
                //cout<<arr[row][col]<<" ";
                ans.push_back(arr[row][col]);
            }
        }
        else
        {
            //even case ->top to bottom
            for(int row =0;row<nRows;row++)
            {
                //cout<<arr[row][col]<<" ";
                ans.push_back(arr[row][col]);
            }
        }
        
    }
    return ans;
}
//https://www.codingninjas.com/codestudio/problems/print-like-a-wave_893268?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_6&leftPanelTab=1