#include<iostream>
#include<string>
using namespace std;

char getMaxOccCharacter(string s)
{   int arr[26] = {0};
    for(int i =0;i<s.length();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            arr[s[i]-'A']++;
        }

        else{
            arr[s[i]-'a']++;
        }
    }

    int max = 0;
    int ans = -1;
    for(int i = 0;i<26;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
            ans = i;
        }
    }

    char ch = 'a'+ans;
    return ch;
}

//https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1