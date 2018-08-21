#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node* prev;
};

struct node* start;
struct node* create_node(int val)
{
    struct node* temp;
    temp=new (struct node);
    temp->data=val;
    temp->next=NULL;
    return temp;
    
}

void insert_node()
{
   struct node* p;
    
    int x;
    cin>>x;
    p=create_node(x);
    if(start==NULL)
    {
    start=p;
        p->next=NULL;
    }
    else 
        p->next=start;
    start=p;
}
/*void reverse()
{
    struct node* temp;
    temp=start;
    int i,n;
    while(temp!=NULL)
    {
        for(i=n;i>=0;i--)
        {
          cout<<i;  
        }
    }
}*/
void traverse()
{
    struct node *temp;
    temp=start;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
int main()
{
    int i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        insert_node();
        
    }
      
    traverse();

}
