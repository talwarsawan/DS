#include<iostream>
using namespace std;

struct node{
	int data;
	struct node *next;
}*start;


node * create_node(int val){
	struct node *temp;
	temp= new (struct node);
	temp -> data= val;
	temp -> next =NULL;
	return temp;
}

void insert_beg(){
	int val;
	struct node *p;
	cin>>val;
	p=create_node(val);
	
	if(start==NULL){
		start=p;
		p->next=NULL;
	}
	else{
		p->next=start;
		start=p;
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
	start=NULL;
	insert_beg();
	insert_beg();
	insert_beg();
	show();	
}
