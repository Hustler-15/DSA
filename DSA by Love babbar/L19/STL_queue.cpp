#include<iostream>
#include<queue>
using namespace std;

int main()
{
      queue<string> q;

      q.push("love"); //To insert an element
      q.push("Babbar");
      q.push("kumar");

      //To print the first element
      cout<<"top Element "<<q.front()<<endl;

      //To delete the first element
      q.pop();
      cout<<"Top element"<<endl;

      //To check size
      cout<<q.size()<<endl;

      //To check for empty
      cout<<"empty or not "<<q.empty()<<endl; 
}