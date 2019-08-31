#include <stdio.h>
#include<iostream>
#include<time.h>
using namespace std;

void bubble(int arr[],int n){
	int c=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]<arr[j+1]){
				c+=1;
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				}
			}
	}
	cout<<"\n No.of counts in selection sort = "<<c;
	}
	
	void selSort(int arr[],int n){
		int c=0;
	for(int i=0;i<n-1;i++){
		int min_i=i;
		for(int j=i+1;j<n;j++){
		if(arr[j]<arr[min_i])
			c+=1;
		min_i=j;
		}
		int temp=arr[min_i];
		arr[min_i]=arr[i];
		arr[i]=temp;
	}
	cout<<"\n No.of counts in bubble sort = "<<c;
	}
	

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
	//cout<<"Enter the value of k: ";
	//cin>>k;
	bubble(arr,n);
	selSort(arr,n);
	//merSort(arr,n);
	return 0;
}