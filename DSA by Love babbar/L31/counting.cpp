#include<iostream>
using namespace std;
//Tail recursion
void print(int n)
{   //Base case
    if(n == 0)
    {
        return ;
    }
    cout<<n<<endl;

    //Recursive relation
    print(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<endl;
    print(n);
}

//https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118522/offering/1380913