#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{   
    //creation
    unordered_map<string, int> m;

    //Insertion
    pair<string, int> p = make_pair('babbar', 3);
    m.insert(p);

    pair<string, int> p2('love',2);
    m.insert(p2);

    m["mera"] = 1;
    m["mera"] = 2; //It will overwrite the previous one

    //Search
    cout<<m["mera"]<<endl;
    cout<<m.at("babbar")<<endl;
    cout<<m.at("unknown")<<endl; //It will give error
    cout<<m["unknown"]<<endl; // It will return 0 and if line 25 is written after this then both will return 0

    //size
    cout<<m.size()<<endl;

    //check presence 
    cout<<m.count("bro")<<endl; //It will written 0 in absence

    //erase
    m.erase("love");

    //Iterating the map
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    //Using iterator
    unordered_map<string, int> :: iterator it = m.begin();
    while(it != m.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    //If we use order map for traversing then TC is o(n) and in unordered it's constant

}