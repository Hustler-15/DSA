#include<iostream>
using namespace std;

void reachHome(int src, int dest)
{   //Base Case
    if(src == dest)
    {
        cout<<"Pahuch gaya ghar"<<endl;
        return ;
    }

    //Recursive Relation
    reachHome(src+1, dest);
}

int main()
{
    int dest = 10;
    int src = 1;

    reachHome(src, dest);

    return 0;
}