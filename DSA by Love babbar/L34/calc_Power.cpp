#include<iostream>
using namespace std;

int power(int a, int b)
{
    //Base case
    if(b == 0)
    {
        return 1;
    }
    if(b == 1)
    {
        return a;
    }
    //Recursive call
    int ans = power(a,b/2);
    //For even
    if(b&1 == 0)
    {
        return ans*ans;
    }
    else{
        //odd
        return a*ans*ans;
    }
}