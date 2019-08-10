#include<iostream>

using namespace std;

int find_max(int n, int* arr)
{
	int max=-999,i=0;
	for(i=0;i<n;i++)
		if(arr[i]>max)
			max=arr[i];
	//cout<<" \n The max of n integers is "<<max;
	return max;
}