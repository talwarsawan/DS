#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	struct node *next;
}*start;

struct node * create_node(int val){
	struct node *temp;
	temp= new (struct node);
	temp->data=val;
	temp->next=NULL;
	return temp;
}

void insert(){
	struct node *temp,*temp1,*p;
	int val;
	
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

void delete_bef(){
	struct node *p,*ptr,*preptr,*temp;
	int val;
	temp=start;
	ptr=temp;
	preptr=ptr;
	cin>>val;
	
	while(temp->data!=val && temp->next!=NULL){
		preptr=ptr;
		ptr=temp;
		temp=temp->next;
	}
	
	preptr->next=temp;
	free(ptr);
}

void show(){
	struct node *temp;
	temp=start;
	
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->next;
	}
}

int main(){
	start=NULL;
	int a;
	cout<<"How many ?";
	cin>>a;
	
	for(int i=0;i<a;i++){
	insert();
}
	cout<<"Delete\n";
	delete_bef();

	show();
}
