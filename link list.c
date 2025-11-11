#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
    int num;
    struct NODE *ptr;
}node;

node *head = NULL;
void insert()
{
    int n;
    printf("Enter value of element:\n");
    scanf("%d",&n);
    node *temp =(node*)malloc(sizeof(node*));
    temp->num = n;
    if(head == NULL)
    {
        temp->ptr=NULL;
        head = temp;
    }
    else
    {
       temp->ptr=head;
       head = temp;
    }
    //return 0;

}
void pop()
{
   if(head == NULL)
      printf("\nStack is Empty!!!\n");
   else
    {
      node *temp = head;
      printf("\nDeleted element: %d\n", temp->num);
      head = temp->ptr;

   }
}
int main()
{
    node *first,*temp;
    int count=0,choice=1;
    first=0;
     scanf("%d",&choice);
    while(count<=choice)
    {
        insert();
        count++;
    }
    pop();
    temp=head;
    printf("status of the linked list:\n");
    while(temp->ptr !=NULL)
    {
        printf("%d ->",temp->num);
        count++;
        temp=temp->ptr;
    }
    printf("NULL\n");
    printf("No. of nodes in the list = %d\n", count);
    return 0;
}
