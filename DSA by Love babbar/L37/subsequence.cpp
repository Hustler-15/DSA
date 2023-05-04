#include<iostream>
using namespace std;
#include <vector>
void solve(string str,string output,int index,vector<string>& ans)
{
    if(index>=str.length())
    {   if(output.length()>0)
        {
        ans.push_back(output);
        }
        return;
    }
    
    //exclude
    solve(str,output,index+1,ans);
    
    //include
    char element = str[index];
    output.push_back(element);
    solve(str,output,index+1,ans);
}
vector<string> subsequences(string str){
	
	vector<string> ans;
    string output = "";
    int index = 0;
    solve(str,output,index,ans);
	return ans;
}
//https://www.codingninjas.com/codestudio/problems/subsequences-of-string_985087?leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_16
