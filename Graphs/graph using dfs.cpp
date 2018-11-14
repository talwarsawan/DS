#include<iostream>
using namespace std;

#include<stdlib.h>
int cost[10][10],i,j,k,n,stack[10],top,v,visit[10],visited[10];
int main()
{
	int m;
	cout <<"enter no of vertices";
	cin >> n;
	cout <<"ente no of edges";
	cin >> m;
	cout <<"\nEDGES \n";
	for(k=1;k<=m;k++)
	{
		cin >>i>>j;
		cost[i][j]=1;
	}
	cout <<"enter initial vertex";
	cin >>v;
	cout <<"ORDER OF VISITED VERTICES";
	cout << v <<" ";
	visited[v]=1;
	k=1;
	while(k<n)
	{
		for(j=n;j>=1;j--)
			if(cost[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
			{
				visit[j]=1;
				stack [top]=j;
				top++;
			}
		v= stack [--top];
		cout<<v << " ";
		k++;
		visit[v]=0; visited[v]=1;
	}
	;
}
