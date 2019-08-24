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
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]<arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				}
			}
	}
	}
		end=clock();
	cout<<"\nThe kth smallest element is "<<arr[n-k];
	t=double(end-start)/double(CLOCKS_PER_SEC);
		cout<<"\n time taken: "<<t;
	return 0;
}

