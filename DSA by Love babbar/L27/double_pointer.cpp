#include<iostream>
using namespace std;

void update(int **p)
{
   // p=p+1; //value changes bcz it is new pointer which stores address of p it is valid in this scope only

   // *p=*p+1; //it will change  bcz it is pointing to address of i so address of i will be changed

    **p = **p+1; //it will change bcz it pointing to a value that is i
}

int main(){
    int i = 5;
    int *p = &i;
    int **p1 = &p;

    cout<<"Printing P"<<p<<endl;
    cout<<"Printing address of P"<<&p<<endl;

    cout<<*p1<<endl;

    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p1<<endl;

    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p1<<endl;

    cout<<&p<<endl;
    cout<<p1<<endl;
}