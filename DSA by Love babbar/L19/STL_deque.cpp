#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d;

    //To insert an element

    d.push_back(1);//It insert at the end
    d.push_front(2);//It insert at the front

    //To delete an element
    d.pop_back();//To delete last element
    d.pop_front();//To delete front element

    //To access any element at particular index
    cout<<d.at(1)<<endl;

    
    cout<<"First element "<<d.front()<<endl;
    cout<<"Last element "<<d.back()<<endl; 
    cout<<"Empty or not"<<d.empty()<<endl;

    //To clear deque

    d.erase(d.begin(),d.begin()+1); //It will erase from a particular range

    //We can use all methods used in vector
}