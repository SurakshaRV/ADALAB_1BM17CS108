#include <stdio.h>
	int binarys(int a);
	
	
	
	int main()
	{
		int x,n;
		printf("Enter a number to find the square root");
		scanf("%d",&x);
		n=binarys(x);
		printf("Square root of %d is  %d \n",x,n);
		return 0;
	}
	int binarys(int a)
	{
		int mid,low=0,high,result,y;
		high=a-1;
		while(low<=high)
		{
			mid=(low+high)/2 ;
			y=mid*mid ;
			if(y==a)
				 return mid ;
			else if(y<a)
				{low=mid+1;
				result=mid;
				}
				
			else
				high=mid-1;
		}
		return result;
	}