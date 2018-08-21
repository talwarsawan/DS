#include<iostream>
#include<stdlib>
using namespace std;

struct node{
	int data;
	struct node *prev;
	struct node *next;
}*start;

struct node *create_node(int val){
	struct node *temp;
	temp=new (struct node);
	temp->next=NULL;
	temp->prev=NULL;
	temp->data=val;
	return temp;
}


void insert(){
	int a,c=0,k=1,val;
	struct node *p,*temp,*ptr;
	temp=start;
	cout<<"Enter value";
	cin>>val;
	
	p=create_node(val);

	if(start==NULL){
		start=p;
		p->next=NULL;
		p->prev=NULL;
	}
	
	else{
	while(temp->next!=NULL){
		ptr=temp;
		temp=temp->next;
		}
		
		temp->next=p;
		p->prev=ptr;
		p->next=NULL;
	}
	
}

void delete_number(int val){
	int c=0,k=0;
	struct node *temp,*p;
	temp=start;
	
	while(temp->next!=NULL){
		c++;
		temp=temp->next;
	}
	
	temp=start;
	
	while(temp->data!=val){
		k++;
		temp=temp->next;
	}
	
	if(start==NULL){
		cout<<"Sorry the number cannot be deleted";
	}
	
	else{
			if(k>2 && k<=c){
				temp->next->prev=NULL;
				start=temp->next;
				//free();
			}
			else if(k==1){
				start=NULL;
			}
			
			
			temp=temp->next;
		}
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
	cout<<"How many ?";
	cin>>a;
	
	for(int i=0;i<a;i++){
		insert();
	}
	
	cout<<"Which number to delete";
	cin>>a;
	
	delete_number(a);
	
	show();
}
