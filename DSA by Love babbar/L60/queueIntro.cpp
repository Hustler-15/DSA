#include<iostream>
using namespace std;
#include<queue>

int main(){

    queue<int> q;
    
    q.push(11);

    q.push(15);

    q.push(13);

    cout<<"Size of queue is : "<<q.size()<<endl;

    q.pop();
    q.pop();
    q.pop();

    cout<<"Size of queue is : "<<q.size()<<endl;

    if(q.empty()){
        cout<<"Queue is empty "<<endl;
    }
    else{
        cout<<"Queue is not empty "<<endl;
    }
}