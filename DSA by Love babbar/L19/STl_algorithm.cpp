#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
  vector<int> v;

  v.push_back(1);
  v.push_back(3);
  v.push_back(6);
  v.push_back(7);
  v.push_back(9);

  cout<<binary_search(v.begin(),v.end(),5);

  cout<<"lower bound"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
  cout<<"Upper bound"<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

  int a = 5;
  int b = 7;

  cout<<"Max ->"<<max(a,b)<<endl;

  cout<<"Min ->"<<min(a,b)<<endl;
  
  swap(a,b);
  cout<<"swap ->"<<a<<b<<endl;

  string abcd = "abcd";
  reverse(abcd.begin(),abcd.end());

  rotate(v.begin(),v.begin()+1,v.end());
  cout<<"After rotate"<<endl;

  for(int i:v)
  {
    cout<<i<<" ";
  }
  cout<<endl;

  sort(v.begin(),v.end()); //based on intro sort combination of 3 algos
                           //Insertion,quick and heap sort
}