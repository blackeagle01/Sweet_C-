#include<iostream>
#include<math.h>
using namespace std;
void merge(int a[],int p,int q,int r)
{
int n1=q-p+1;
int n2=r-q;
int a1[n1+1],a2[n2+1];
a1[n1]=1000; a2[n2]=1000;
int x=0;
for(int i=p;i<p+n1;i++)
{
a1[x]=a[i];
cout<<a1[x]<<endl;
x++;
}
int l=0;
for(int i=q+1;i<q+1+n2;i++)
{
a2[l]=a[i];
cout<<a2[x]<<endl;
l++;
}
int i,j,k;
i=0;j=0;k=0;
for(int k=p;k<=r;k++)
{
if(a1[i]<a2[j])
{
a[k]=a1[i];
i++;
}
else
{
a[k]=a2[j];
j++;
}
}
}
void mergesort(int a[],int p,int r)
{
int q=floor((p+r)/2);
if(p<r)
{
mergesort(a,p,q);
mergesort(a,q+1,r);
merge(a,p,q,r);
}
}
main()
{
int n;
cout<<"enter elements";
cin>>n;
int a[n+1];
for(int i=1;i<n+1;i++)
{
cin>>a[i];
}
mergesort(a,1,n);
for(int i=1;i<n+1;i++)
{
cout<<a[i]<<"\t";
}
return 0;
}



