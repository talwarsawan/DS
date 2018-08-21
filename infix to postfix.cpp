#include<iostream>
using namespace std;
#define max 20
char arr[max],arr2[max];
int num1=0,num2=0;

void stac(char k){
	
	if(k==')'){
		
		while(arr[num1]!='('){
			num2++;
			arr2[num2]=k;
			num1--;
		}
		//num1--;
	}
	else{
	num1++;
	arr[num1]=k;
	}	
}

void display(){
	cout<<"Postfix";
	
	for(int i=0;i<num2;i++){
		cout<<arr2[i];
	}
}

void post(char k){
	num2++;
	arr2[num2]=k;
}

int main(){
	int a;
	char n;
	cout<<"Enter the number of elements";
	
	cin>>a;
	
	for(int i=0;i<a;i++){
	cin>>n;	
		
	if(n=='(' || n=='+' || n=='-' || n==')' || n=='[' || n==']' || n=='{' || n=='}' || n=='%' || n=='*'){
		stac(n);
	}
	
	else{
		post(n);
	}
}

	display();	
}
