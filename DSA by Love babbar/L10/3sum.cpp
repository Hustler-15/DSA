#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
#include <vector>
using namespace std;
vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    vector<vector<int>> ans;

    for(int i = 0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            for(int k=j+1;k<arr.size();k++)
            {
                if(arr[i]+arr[j]+arr[k] == s)
                {
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    ans.push_back(temp);
                }
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}

