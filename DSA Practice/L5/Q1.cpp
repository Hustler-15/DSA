/*<------------------------------------------------------------------------>

Given an integer number n, return the difference between the product of its digits and the sum of its digits.

Example 1:

Input: n = 234
Output: 15 
Explanation: 
Product of digits = 2 * 3 * 4 = 24 
Sum of digits = 2 + 3 + 4 = 9 
Result = 24 - 9 = 15

<------------------------------------------------------------------------------>
*/

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number : "<<endl;

    cin>>num;

    int sum=0,prod=1;

    while(num!=0)
    {
        int digit = num%10;
        sum = sum+digit;
        prod = prod*digit;
        num = num/10;
    }

    int diff = prod-sum;
    cout<<diff;
}