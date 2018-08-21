#include<iostream>
using namespace std;

struct node{
	struct node *next;
	int data;
}*start;

struct node *create_node(int val){
	struct node *temp;
	temp=new (struct node);
	temp->data=val;
	temp->next=NULL;
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
			c++;
			temp1=temp1->next;
		}
		
		temp1->next=p;
		p->next=NULL;
			
	}
}

void delete_af(){
	struct node *temp,*ptr,*postptr;
	temp=start;
	int val,c=0,k=1;
	
	cout<<"Delete: \n";
	cin>>val;
	
	while(temp->next!=NULL){
		c++;
		temp=temp->next;
	}
	
	while(temp->data!=val && temp->next!=NULL){
		k++;
		
		temp=temp->next;
		ptr=temp->next;
		postptr=ptr->next;
	}
	
	if(c==k && temp->data==val){
		cout<<"We cannot delete it!";
	}
	
//	temp->next=postptr;
	
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
	start= NULL;
	int a;
	
	cout<<"How many: ";
	cin>>a;
	
	for(int i=0;i<a;i++){
		insert();
	}
	
	delete_af();
	show();
}
