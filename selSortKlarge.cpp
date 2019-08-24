#include <stdio.h>
#include<iostream>
#include<time.h>

using namespace std;

int main(int argc, char **argv)
{
	int n,arr[10],sarr[10],k,small=-99;
	double t;
	clock_t start,end;
	
	cout<<"Enter array size: ";
	cin>>n;
	cout<<"\n Enter the array elements\n";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Enter the value of k: ";
	cin>>k;
	start=clock();
	{
	for(int i=0;i<n-1;i++){
		int min_i=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min_i])
				min_i=j;
		int temp=arr[min_i];
		arr[min_i]=arr[i];
		arr[i]=temp;}
	}
	}
		end=clock();
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"\n";
	cout<<"\nThe k largest elements are\n";
	for(int i=n-1;i>=(n-k);i--)
		cout<<arr[i]<<"\n";
	t=double(end-start)/double(CLOCKS_PER_SEC);
		cout<<"\n time taken: "<<t;
	return 0;
}
