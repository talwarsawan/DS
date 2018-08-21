#include<iostream>
using namespace std;

struct node{
	int data;
	struct node *next;
	struct node *prev;
}*start;
	
struct node * create_node(int val){
	struct node *temp;
	temp= new (struct node );
	temp->data=val;
	temp->next=NULL;
	temp->prev=NULL;
	return temp;
}


void insert(){
	struct node *temp,*temp1,*p;
	int val,c=0,k=0;
	
	temp1=start;
	
	cout<<"Insert: ";
	cin>>val;
	p=create_node(val);
	
	if(start==NULL){
		start=p;
		p->next=NULL;
	}
	else
	{
		while(temp1->next!=NULL){
			temp1=temp1->next;
		}
		
		temp1->next=p;
		p->next=NULL;
	}
}

	

void after(){
	struct node *p,*temp=start;
	int val;
	cin>>val;
	
	p=create_node(val);
	
	p->next=NULL;
	temp->next=p;
	p->prev=temp;
}

void show(){
	struct node *temp;
	temp=start;
	
	while(temp!=NULL){
		cout<<temp->data;
		temp=temp->next;
	}
}

int main(){
	int a;
	start=NULL;
	cout<<"How many";
	cin>>a;
	
	cout<<"Before";
	for(int i=0;i<a;i++)
	insert();
	
	/*cout<<"After";	
	for(int i=0;i<a;i++)
	after();
	*/
	
	show();
}
