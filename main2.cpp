#include <iostream>
#include<stdio.h>
//#include<bits/stdc++.h>

using namespace std;

int find_num(int n, int *arr, int k);
int find_max(int n, int* arr);

int main(int argc, char **argv)
{
	//printf("hello world\n");
	//################# lab0a1######################
	int n,i=0, arr[10], max=-999;
	cout<<"Enter the value of n : ";
	cin>>n;
	cout<<" \n enter the array of numbers: \n";
	for(i=0;i<n;i++)
		cin>>arr[i];
	max=find_max(n,arr);
	cout<<" \n The max of n integers is "<<max;
	 //############### end ################
	 //
	 /* ########## lab0 addignment 2####################
	 int n,k,i=0,arr[10],result;
	 cin>>n>>k;
	 cout<<" \n enter the array\n";
	 for(i=1;i<=n;i++)
		cin>>arr[i];
	 result=find_num(n,arr,k);
	 cout<<result;*/
	return 0;
}

