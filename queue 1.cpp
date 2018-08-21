#include<iostream>
using namespace std;

int main(){
	int a,front=0,rear=1,max=10;
	int arr[max];
	
	cin>>a;
	
	if(a<=max){
	for(int i=0;i<a;i++){
		cin>>arr[i];
		front=1;
		rear=rear+1;
	}
	
	for(i=0;i<a;i++){
		if(front==0 || front>rear){
			cout<<"Underflow";
		}
		else{
			front=front+1;
		}
	}
	}
	else{
		cout<<"Overflow!";
	}
	
}
