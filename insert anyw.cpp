#include<iostream>
using namespace std;

struct node{
	int data;
	struct node *next;
}*start;


struct node * create_node(int val){
	struct node *temp;
	temp= new(struct node);
	temp->data=val;
	temp->next=NULL;
	return temp;
}


void  insert(){
	struct node *p,*temp,*temp1,*ptr;
	int val,c=0,i=0;
	cout<<"Insert node";
	cin>>val;
	p= create_node(val);
	
/*	while(temp1->next!=NULL){
		c++;
		temp1=temp1->next;
	}
*/	
	temp=start;
		while(temp->next!=NULL){
	ptr=temp;
		i++;
		if(temp->data>val){
			
			if(i==c && i==1){
				p->next=start;
				start=p;
			}
			else if(i==c){
				temp->next=p;
				p->next=NULL;
			}
			else{
				temp->next=ptr;
				ptr->next=temp;
			}
		}
	}
	temp=temp->next;
}

void show(){
	struct node * temp;
	temp=start;
	
		while(temp!=NULL){
		cout<<temp->data;
		temp=temp->next;
	}
}

main(){
	start=NULL;
	insert();
	insert();
	insert();
	show();
}
