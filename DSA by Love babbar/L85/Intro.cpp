#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
template <typename T>

class graph
{
    public:
        unordered_map<T, list<T>> adj;

        void addEdge(T u,T v,bool direction)
        {
            // 0->undirected graph
            //1->directed graph

            //create an edge from u to v
            adj[u].push_back(v);

            //if it is undirected graph we have to create edge vice versa
            if(direction==0)
            {
                adj[v].push_back(u);
            }
        }

        void printAdjList()
        {
            for(auto i:adj)
            {
                cout<<i.first<<"->";
                for(auto i:i.second)
                {
                    cout<<i<<", ";
                }
                cout<<endl;
            }
        }
};

int main()
{
    int n;
    cout<<"Enter number of nodes :";
    cin>>n;

    int m;
    cout<<"Enter number of edges :";
    cin>>m;

    graph<int> g;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;

        g.addEdge(u,v,0);
    }

    g.printAdjList();
}