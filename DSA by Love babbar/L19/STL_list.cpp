#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l;

    list<int> a(5,200); //It has 5 elements and initialised by 200 all 5 elements

    list<int> b(a); //copying list a to b

    //To insert elements
    l.push_back(1); //At end
    l.push_front(2);//At starting

    for(int i:l)
    {
        cout<<i<<endl;  //We can not directly access element in list we have to traverse 
                        // Bcz it is built using doubly linked list                
    }

    //To erase an element
    l.erase(l.begin());

    //We can apply all methods of deque
}