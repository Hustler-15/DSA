#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int> maxi; //max heap by default

    priority_queue<int,vector<int>,greater<int>> mini; //min heap

    //To insert elements
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    
    //[To retrieve data
    int n = maxi.size(); // we stored it to another variable bcz we are performing pop bcz of which size is decreasing
    for(int i = 0;i<n;i++)
    {
       cout<< maxi.top() << " ";
       maxi.pop();
    }

    mini.push(5);
    mini.push(1);
    mini.push(3);
    mini.push(0);

    int m = maxi.size(); // we stored it to another variable bcz we are performing pop bcz of which size is decreasing
    for(int i = 0;i<m;i++)
    {
       cout<< mini.top() << " ";
       mini.pop();
    }

    //To check for empty
    cout<<mini.empty()<<endl;
}