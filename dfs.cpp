#include<iostream>
#include<bits/stdc++.h>
#include<list>
using namespace std;

int arr[10],k=0;
vector<int> name;
class Graph
{
    int V;

    list<int> *adj;


    void DFSUtil(int v, bool visited[]);
public:
    Graph(int V);



    void DFS(int v);
    void addEdge(int v, int w);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::DFSUtil(int v, bool visited[])
{

    visited[v] = true;
    cout << v << " ";

    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
    {
        if (!visited[*i])
        {
            DFSUtil(*i, visited);

        }

    }
    arr[k]=v;
    k++;
}
void Graph:: DFS(int V)
{

    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
    //for(int i=0;i<V;i++)
   // {
        //if(visited[i]==false)
            DFSUtil(V, visited);
   // }

}

int main()
{

    Graph g(6);
    g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(0, 4);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);


    cout << "Following is Depth First Traversal"
         " (starting from vertex 2) \n";
    g.DFS(5);
cout<<endl;

    cout<<"topological ordered :"<<endl;
    for(int j=0; j<k; j++)
        cout<<arr[j]<<" ";

    cout<<endl;

    return 0;
}

