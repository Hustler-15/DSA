//To convert a negative number in binary
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int i = 0, ans = 0;
    while(n!=0)
    {
        int bit = n&1;
        cout << bit;
        ans = (bit*pow(10,i)+ans);
        i++;
        n = n>>1;
    }
    
    cout<<ans<<endl;
  

};