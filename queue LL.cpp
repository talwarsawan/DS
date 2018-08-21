#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	struct node *next;
	int data;
}*start;

struct node *create_node(int val){
	struct node *temp;
	
	temp = new (struct node);
	temp->data=val;
	temp->next=NULL;
	
	return temp;
};


void insert(){
	struct node *p,*temp;
	int val;
	temp=start;
	
	cin>>val;
	p=create_node(val);
	
	if(start==NULL){
		start=p;
	}
	else{
		while(temp->next!=NULL){
			temp=temp->next;
		}
		
		temp->next=p;
		p->next=NULL;
	}
}

void del(){
	struct node *front,*rear,*temp;
	temp=start;
	front=start;
	
	while(temp->next!=NULL){
		temp=temp->next;
	}
	rear=temp;
	
	while(front!=NULL){
		temp=front;
		front=front->next;
		start=front;
		free(temp);
	}
}

void display(){
	struct node *temp;
	temp=start;
	
	while(temp!=NULL){
		cout<<temp->data;
		temp=temp->next;
	}
}

int main(){
	start=NULL;
	int a;
	
	cout<<"Enter the number of elements";
	cin>>a;
	
	for(int i=0;i<a;i++){
		insert();
	}
	
	del();
	
	display();
}
