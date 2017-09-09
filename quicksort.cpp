#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
int t;
t=*x;
*x=*y;
*y=t;
}
int partition(int a[],int p,int r)
{
int i=p-1;
int j=p;
for(j=p;j<r;j++)
{
if(a[j]<a[r])
{
i++;
swap(&a[i],&a[j]);
}
}
swap(&a[i+1],&a[r]);
return i+1;
}
void quicksort(int a[],int p,int r)
{
if(p<=r)
{
int x=partition(a,p,r);
quicksort(a,p,x-1);
quicksort(a,x+1,r);
}
}

main()
{
int n;
cout<<"No of elements in the array";
cin>>n;
int a[n+1];
for(int i=1;i<n+1;i++)
{
cin>>a[i];
}
quicksort(a,1,n);
for(int i=1;i<n+1;i++)
{
cout<<a[i]<<"\t";
}
return 0;
}
