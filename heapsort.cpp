#include<iostream>
using namespace std;
bool max_heap(int a[],int n)
{
for(int i=1;i<=n;i++)
{
if(2*i<=n && (2*i+1)<=n)
{
if(a[2*i]>a[i] || a[2*i+1]>a[i])
{
return false;
}
}
else if(2*i<=n)
{
if(a[2*i]>a[i])
{
return false;
}
}
}
return true;
}
int max_index(int i,int a[])
{
int max=a[i];
int maxin=i;
if(a[2*i]>max)
{
max=a[2*i];
maxin=2*i;
}
if(a[2*i+1]>max)
{
max=a[2*i+1];
maxin=2*i+1;
}
return maxin;
}
void swap(int *x,int *y)
{
int t;
t=*x;
*x=*y;
*y=t;
}

void max_heapify(int a[],int n)
{
while(!max_heap(a,n))
{
for(int i=1;i<=n;i++)
{
if(2*i<=n && (2*i+1)<=n)
{
if(i!=max_index(i,a))
{
swap(&a[i],&a[max_index(i,a)]);
}
}
else if(2*i<=n)
{
if(a[i]<a[2*i])
{
swap(&a[i],&a[2*i]);
}
}
}
}
}
void heapsort(int a[],int n)
{
int p=n;
for(int i=1;i<=n;i++)
{
swap(&a[1],&a[p]);
cout<<a[p]<<endl;
p--;
max_heapify(a,p);
}
}
main()
{
int n;
cin>>n;
int a[n+1];
for(int i=1;i<=n;i++)
{
cin>>a[i];
}
max_heapify(a,n);
cout<<" Sorted Array"<<endl;
heapsort(a,n);
return 0;
}
