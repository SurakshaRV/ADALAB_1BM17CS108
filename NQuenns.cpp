#include <bits/stdc++.h>
#include<stdio.h>
#include<conio.h>
#include <iostream>
using namespace std;

int place(int x[], int k)
{
int i;
for(i=1;i<=k-1;i++)
{
	if(i+x[i]==k+x[k]||i-x[i]==k-x[k]||x[i]==x[k])
		return 0;
}
return 1;
}

void nqueens(int n)
{
	int k,x[20],count=0;
k=1;
x[k]=0;
while(k!=0)
{
x[k]++;
while(place(x,k)!=1 && x[k]<=n)
x[k]++;
if(x[k]<=n)
{
if(k==n)
{
cout<<"\nSolution "<< ++count<<"\n";
cout<<"Queen\tPosition\n";
for(k=1;k<=n;k++)
cout<<k<<"\t"<<x[k]<<'\n';

}
else
{
k++;
x[k]=0;
}
}
else
	k--;
}
}

int main()
{
int n;
//clrscr();
cout<<"Enter the number of Queens\n";
cin>>n;
nqueens(n);
getch();
return 0;
}
