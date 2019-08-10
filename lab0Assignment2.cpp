int find_num(int n, int *arr, int k)
{
	int beg=0, end=n, mid=(beg+end)/2;
	while(beg!=end)
	{
		if(arr[mid]==k)
			return  1;
		else if(k>arr[mid])
			beg=mid-1;
		else
			end=mid+1;
	}
	return -1;
}