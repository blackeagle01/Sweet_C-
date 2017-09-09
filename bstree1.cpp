#include<iostream>
using namespace std;
void inorder(int left[],int right[],int root,int key[])
{
if(left[root]!=99)
{
inorder(left,right,left[root],key);
}
cout<<key[root]<<endl;
if(right[root]!=99)
{
inorder(left,right,right[root],key);
}
}
void bstree(int node,int key[],int left[],int right[],int root)
{
if(key[node]<key[root])
{
if(left[root]==99)
{
left[root]=node;
}
else
bstree(node,key,left,right,left[root]);
}
else
{
if(right[root]==99)
{
right[root]=node;
}
else
{
bstree(node,key,left,right,right[root]);
}
}
}
main()
{
int n;
cout<<"size of array";
 cin>>n;
int left[n+1],right[n+1],key[n+1];
for(int i=1;i<=n;i++)
{
left[i]=99;
right[i]=99;
cout<<"Key of "<<i;
cin>>key[i];
}
for(int i=2;i<=n;i++)
{
bstree(i,key,left,right,1);
}
cout<<"Sorted order\n";
inorder(left,right,1,key);
return 0;
}
