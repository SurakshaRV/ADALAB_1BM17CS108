#include <bits/stdc++.h>
using namespace std;
int v[10][10],n,c;

int max(int x, int y){
	if(x>y)
	return x;
	else 
		return y;
}

void npsk(int *p,int *w){
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=c;j++){
			if(i==0||j==0)
				v[i][j]=0;
			else if((j-w[i])<0)
				v[i][j]=v[i-1][j];
			else
				v[i][j]=max(v[i-1][j],v[i-1][j-w[i]]+p[i]);
		}
	}
	cout<<"\n OUTPUT \n";
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=c;j++){
			cout<<v[i][j]<<"\t";
		}
		cout<<'\n';
	}
	cout<<"\n Max profit is "<<v[n][c];
}

int main(int argc, char **argv)
{
	int p[10],w[10];
	cout<<"Number of items: ";
	cin>>n;
	cout<<"\nCapacity of knapsack: ";
	cin>>c;
	cout<<"\nEnter the weights\n";
	for(int i=1;i<=n;i++)
	cin>>w[i];
	cout<<"\nEnter the profits\n";
	for(int j=1;j<=n;j++)
		cin>>p[j];
	npsk(p,w);
	return 0;
}
