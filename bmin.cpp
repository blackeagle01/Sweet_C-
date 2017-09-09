#include<iostream>
using namespace std;
int bmin(int node,int a[],int p,int r)
{
int q=(p+r)/2;
if(p<=r)
{
if(a[q]>=node)
{
bmin(node,a,p,q-1);
}
else
{
bmin(node,a,q+1,r);
}
}
else
{
return q+1;
}
}
main(){
int n;
cin>>n;
int a[n+1];
for(int i=1;i<n+1;i++)
{
cin>>a[i];
}
int node;
cout<<"Node";
cin>>node;
cout<<bmin(node,a,1,n);
return 0;
}

