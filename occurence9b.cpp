#include<bits/stdc++.h>
using namespace std;
int c=0,f=999,la=-999;
void fun(int a[],int l,int h,int k)
{
int beg=l,end=h-1,mid=0;
while(beg<=end)
{
mid=(beg+end)/2;
if(a[mid]==k)
{
c++;
if(f>mid)
 f=mid;
if(la<mid)
  la=mid;
break;
}
else if(a[mid]>k)
end=mid-1;
else
beg=mid+1;
}
if(l<mid)
fun(a,l,mid,k);
if(mid+1<h)
fun(a,mid+1,h,k);

}
int main()
{
int n,k;
cout<<"\n No. of items: ";
cin>>n;
int i,a[n];
cout<<"\n Enter the elements: ";
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"\n NO. to be serached: ";
cin>>k;
fun(a,0,n,k);
if(la<0)
cout<<"-1  -1  0";
else{
cout<<f<<endl;
cout<<la<<endl;
cout<<c<<endl;}
return 0;
}
