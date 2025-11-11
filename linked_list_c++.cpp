#include<bits/stdc++.h>
using namespace std;
typedef struct NODE
{
    int data;
    struct NODE *next;

}node;
node *head=NULL;
void insert(int n)
{
    node *temp=new node;
    temp->data=n;
    if(head==NULL)
    {
        temp->next=NULL;
        head=temp;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
}
int pop()
{
    node *temp=head;
    head=temp->next;
    return temp->data;
}
void print(node *head)
{
    node *temp=head;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main()
{
    int n,x;
    cin>>n;
    while(n--)
    {
        cin>>x;
        insert(x);
    }


    print(head);


}
