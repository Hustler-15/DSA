#include<iostream>
using namespace std;
int sqrtInteger(int num)
{
    int s = 0;
    int e = num;
    long long int mid = s+(e-s)/2;
    long long int ans;
    
    while(s<=e)
    {
        long long int square = mid*mid;
        
        if (square == num)
        {
            return mid;
        }
        if(square<num)
        {   ans = mid;
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
};

double morePrecision(int n,int precision, int tempSol)
{
   double factor = 1;
   double ans = tempSol;
   for(int i=0;i<precision;i++)
   {
    factor = factor/10;
    for(double j=ans;j*j<n;j=j+factor)
    {
      ans = j;
    }
   }
   return ans;
}

int main()
{
    int n;
    cin>>n;

    int tempSol = sqrtInteger(n); 

    cout<<"Answer is"<<morePrecision(n, 3, tempSol);
}