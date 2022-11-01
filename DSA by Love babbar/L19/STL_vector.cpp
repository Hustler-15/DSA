#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v ;

    vector<int> a(5,1); //It will create a vector of size 5 and initialise all the elements with 1

    vector<int> last(v); // To copy a vector in other vector
    for(int i:last)
    {
        cout<<last[i]<<endl;
    }

    cout<<"Capacity is "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity is "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity is "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity is "<<v.capacity()<<endl;

    cout<<"Size is "<<v.size()<<endl;
    
    cout<<"element of 2nd index "<<v.at(2)<<endl;

    cout<<"First element "<<v.front()<<endl;
    cout<<"Last element "<<v.back()<<endl;
    cout<<"Empty or not"<<v.empty()<<endl;

    v.pop_back();  //Deletes the last element

    v.clear(); // It clears the size means element of vector not its capacity

    v.begin();//starting iterator
    v.end(); //ending iterator
}