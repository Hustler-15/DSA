#include<iostream>
using namespace std;

void reverseArray(string& str, int i,int j)
{
    //base case
    if(i>j)
    {
        return;
    }
    swap(str[i],str[j]);
    //Recursive relation
    reverseArray(str, i+1, j-1);
}

int main()
{
    string name = "babbar";
    reverseArray(name, 0,name.length()-1);
    cout<<name<<endl;
    return 0;
    }

 //https://www.codingninjas.com/codestudio/problems/reverse-the-string_799927?leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_13   