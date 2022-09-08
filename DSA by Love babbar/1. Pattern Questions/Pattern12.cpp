/*<--------------------Pattern12--------------------------->

                          ABC
                          ABC
                          ABC

<---------------------------------------------------------->

For n = 5
*/
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a Number"<<endl;
    cin>>num;
    int row = 1;
    while (row<=num)
    {   
        int col = 1;
        while(col<=num)
        {   char ch = 65;
            ch=ch+col-1;
            cout<<ch;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
};