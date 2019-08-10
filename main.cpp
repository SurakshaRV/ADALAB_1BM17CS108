#include <iostream>
#include<stdio.h>
//#include<bits/stdc++.h>

using namespace std;

int find_num(int n, int *arr, int k);
//int find_max(int n, int* arr);

int main(int argc, char **argv)
{
	 int n,k,i=0,arr[10],result;
	 cin>>n>>k;
	 cout<<" \n enter the array\n";
	 for(i=1;i<=n;i++)
		cin>>arr[i];
	 result=find_num(n,arr,k);
	 cout<<result;
	return 0;
}

