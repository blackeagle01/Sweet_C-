#include<iostream>
using namespace std;
void bsearch(int node,int a[],int p,int r)
{
if(p<=r)
{
int q=(p+r)/2;
if(a[q]==node)
{
cout<<"Element found";
return;
}
else if(a[q]<node)
{
bsearch(node,a,q+1,r);
}
else if(a[q]>node)
{
bsearch(node,a,p,q-1);
}
}
else
{
cout<<"Element not found";
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
int e;
cout<<"search";
cin>>e;
bsearch(e,a,1,n);
return 0;
}
