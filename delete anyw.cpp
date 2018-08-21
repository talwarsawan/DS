#include<iostream>
using namespace std;

struct node{
	int data;
	struct node *next;
}*start;

node * create_node(int val){
	struct node *temp;
	temp= new(struct node);
	temp->data=val;
	temp->next=NULL;
	return temp;
}

void insert_node(){
	int c=0,k=0,val;
	cin>>val;
	struct node *p,*xyz,*ptr;
	p=create_node(val);
	
	while(p->next!=NULL){
		k++;
	}
	
	while(p->next!=NULL){
	xyz=p->next;
	ptr=xyz->next;
	
	if(ptr->data==p->data){
		p->next=ptr;
	}
	
	else if(xyz->data==val && c==1){
		cout<<"Cannot delete";
	}
	
	else if(c==k){
		cout<<"No data found";
	}
	
	p=p->next;
		
}
}

void show(){
	struct node * temp;
	temp=start;
	
	while(temp->next!=NULL){
		cout<<temp->data;
		temp=temp->next;
	}
}

int main(){
	insert_node();
	insert_node();
	insert_node();
	show();
}

