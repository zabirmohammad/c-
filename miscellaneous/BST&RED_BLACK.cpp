#include<bits/stdc++.h>
#include <vector>
#include <stack>
#include <cstring>
#include <queue>
#include <iostream>
using namespace std;
int ara[100];
int y = 0;
//enum for the status of a node
enum color{
    WHITE,
    GRAY,
    BLACK
};
enum Status {
NOT_VISITED,
VISITED
};

//forward declaration
class Node;

//An object of this class represents an edge in the graph.
class Edge
{
private:
    //the destination vertex
    unsigned cost;//cost of the edge

public:
    Node *orgNode;//the originating vertex
    Node *dstNode;
    Edge(Node *firstNode, Node *secNode, unsigned inCost)
    {
        orgNode = firstNode;
        dstNode = secNode;
        cost = inCost;
    }

    Node* getDstNode()
    {
        return dstNode;
    }

    Node* getOrgNode()
    {
        return orgNode;
    }

    unsigned getCost()
    {
        return cost;
    }
};

//An object of this class holds a vertex of the graph
class Node
{
private:

    //list of outgoing edges for this vertex
    enum Status status;//used in dfs to mark the node visited

public:
    vector<Edge> adjNodeList;
    int name;
    enum color Color;
    string parrent;
    Node(int id)
    {
        name = id;
        status = NOT_VISITED;
    }

//do not del the adj nodes here...they will be deleted by graph destructor
    ~Node()
    {
        adjNodeList.clear();
    }

    enum Status getStatus()
    {
        return status;
    }

    void setStatus(enum Status st)
    {
        status = st;
    }

    int getName()
    {
        return name;
    }

    void addAdjNode(Node *adj, unsigned cost)
    {
    //create an edge with 'this' as the originating node and adj as the destination node
        Edge newEdge(this, adj, cost);
        adjNodeList.push_back(newEdge);
    }

    vector<Edge>& getAdjNodeList()
    {
        return adjNodeList;
    }

//displays all adjacent verticies of this vertex
    void displayList()
    {
        string edgeOp = " -> " ;
        for(int i=0 ; i < adjNodeList.size() ; i++)
        {
            Edge edg = adjNodeList[i];
            cout << name << " -> " << edg.getDstNode()->getName() << endl ;
        }

    }

};
//An object of class graph holds a directed graph
class Graph
{
private:
    vector<Node*> nodeList;//list of verticies
    bool foundCycle;//true if a cycle is found, false otherwise
    int desiredCycSize;

    void clearVisited()
    {
        for(int i = 0; i < nodeList.size() && !foundCycle ; i++)
            {
                nodeList[i]->setStatus(NOT_VISITED);
            }
    }


    Node* findNodeByName(int name)
    {
        for(int i = 0 ; i < nodeList.size() ; i++)
        {
            if(nodeList[i]->getName() == name)
                return nodeList[i];
        }
        return NULL;
    }

public:
    Graph()
    {
        foundCycle = false;
    }

    ~Graph()
    {
    //free mem allocated to verticies
        for(int i=0 ; i < nodeList.size() ; i++)
        delete nodeList[i];
        nodeList.clear();
    }


    void displayGraph()
    {
        for(int i=0 ; i < nodeList.size() ; i++)
        {
            nodeList[i]->displayList();
        }
    }

    void addNewNode(Node *nNode)
    {
        nodeList.push_back(nNode);
    }
   void BFS(Node x)
    {
        queue<Node*> Queue;
        std::vector<Node*>::iterator it = this->nodeList.begin();
        while(it!=this->nodeList.end())
        {
            if((*it)->name==15)
            {
                (*it)->Color=GRAY;
                (*it)->parrent='\0';
                Queue.push(*it);
            }
            else
            {
                (*it)->Color=WHITE;
                (*it)->parrent='\0';
            }
            it++;
        }
        while(!Queue.empty())
        {
            Node *e = Queue.front();
            Queue.pop();
            std::vector<Edge>::iterator mt = e->adjNodeList.begin();
            while(mt!=e->adjNodeList.end())
            {
                Node *temp;
                if( ((*mt).orgNode)->name == e->name )
                    temp=(*mt).dstNode;
                else temp = (*mt).orgNode;
                if(temp->Color==WHITE)
                {
                    temp->Color = GRAY;
                    temp->parrent = e->name;
                    Queue.push(temp);
                }
                mt++;
            }
            e->Color = BLACK;
           // (*e).
             int a=e->name;
             ara[y]=a;
             y++;


        }
        cout<<"Finished BFS"<<endl;
        return;
    }


};
struct Tree{
    int data;
    struct Tree* Right;
    struct Tree* Left;
};
typedef struct Tree tree;

void Insert(tree **rt,int val)
{
    if(*rt==NULL)
    {
        *rt = new Tree();
        (*rt)->data = val;
        (*rt)->Left = NULL;
        (*rt)->Right = NULL;

    }
    else
    {
        tree *prev=*rt;
        tree *temp=*rt;
        while(temp!=NULL)
            {
                prev = temp;
                if(val>temp->data)temp = temp->Right;
                else temp = temp->Left;
            }
        temp = new Tree();
        temp ->data = val;
        temp->Left = NULL;
        temp->Right = NULL;
        if(val>prev->data)prev->Right=temp;
        else prev->Left=temp;

    }

}
void preorder(tree *p){
     printf("%d\n",p->data);
    if(p->Left!= NULL)
    {
        preorder(p->Left);
    }

    if(p->Right!=NULL){
        preorder(p->Right);
    }
}
void inorder(tree *p){
    if(p->Left!= NULL)
    {
        inorder(p->Left);
    }
    printf("%d\n",p->data);
    if(p->Right!=NULL){
        inorder(p->Right);
    }
}
void postorder(tree *p){
    if(p->Left!= NULL)
    {
        postorder(p->Left);
    }
    if(p->Right!=NULL){
        postorder(p->Right);
    }
        printf("%d\n",p->data);

}

int main()
{
    int i;
    Node new1(15);
    Node new2(10);
    Node new3(22);
    Node new4(13);
    Node new5(12);
    Node new6(3);
    new1.addAdjNode(&new2,20);
    new1.addAdjNode(&new3,20);
    new2.addAdjNode(&new1,20);
    new2.addAdjNode(&new4,20);
    new2.addAdjNode(&new5,20);
    new3.addAdjNode(&new1,20);
    new3.addAdjNode(&new6,20);
    new4.addAdjNode(&new2,20);
    new4.addAdjNode(&new5,20);
    new5.addAdjNode(&new4,20);
    new5.addAdjNode(&new6,20);
    new6.addAdjNode(&new3,20);
    new6.addAdjNode(&new5,20);

    Graph g;
    g.addNewNode(&new1);
    g.addNewNode(&new2);
    g.addNewNode(&new3);
    g.addNewNode(&new4);
    g.addNewNode(&new5);
    g.addNewNode(&new6);
    //g.displayGraph();
    g.BFS(new1);
    tree* Root = NULL;
    tree* Current = NULL;
    for(i=0;i<y;i++){
        printf("%d\n",ara[i]);
        Insert(&Root,ara[i]);
    }
    Current = Root;
    while(Current != NULL){
    printf("Tree %d\n",Current->data);
    Current = Current->Left;

    }
    cout<<"Inorder:"<<endl;
    inorder(Root);
    cout<<"preorder"<<endl;
    preorder(Root);
    cout<<"postorder"<<endl;
    postorder(Root);

    return 0;
}




//displays all adjacent verticies of this vertex



//An object of class graph holds a directed graph


