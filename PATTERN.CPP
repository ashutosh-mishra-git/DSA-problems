#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,j,k,n,p,q;
int sp;

cout<<"enter no of rows to print";
cin>>n;
for(i=0;i<n;i++)
{
for(j=0;j<(2*n-1);j++)
cout<<"  ";
cout<<"$ ";
cout<<endl;
}


for(i=1;i<=n;i++)
{          if(i==(n))
	 {
	 for(p=0;p<n;p++)
	  cout<<"$ ";
	  }
	  else
	  {
for(j=i;j<(2*n);j++)
cout<<"  ";
}
for(k=0;k<2*i-1;k++)
cout<<"* ";
if(i==(n))
 {
for(q=0;q<n;q++)
cout<<"$ ";
}
cout<<endl;
}
{    sp=n-1;
 for(i=n-1;i>0;i--)
 {
 for(j=sp;j<2*n;j++)
 cout<<"  ";
 for(k=2*i-1;k>0;k--)
 cout<<"* ";
 cout<<endl;
 sp--;

 }
   }
   for(i=0;i<n;i++)
{
for(j=0;j<(2*n-1);j++)
cout<<"  ";
cout<<"$ ";
cout<<endl;
}


return 0;
}
