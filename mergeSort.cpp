#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int si,int mid,int ei){
  int temp[ei-si+1];
  int i=si;
  int j=mid+1;
  int k=0;

  while(i<=mid&&j<=ei){
    if(a[i]<a[j]){
      temp[k]=a[i];
      k++;
      i++; 
    }
    else{
      temp[k]=a[j];
      j++;
      k++;
    }
  }
  while(i<=mid){
    temp[k]=a[i];
    k++;
    i++;
  }
  while(j<=ei){
    temp[k]=a[j];
    k++;
    j++;
  }
 for(int i=si;i<=ei;i++) a[i]=temp[i-si];
}

void divide(int a[],int si,int ei){
  if(si<ei) 
     {
  int mid=(si+ei)/2;
  divide(a,si,mid);
   divide(a,mid+1,ei);
   merge(a,si,mid,ei);
}
}


int main() {
   int size;
   cin>>size;
   int a[size];
   for(int i=0;i<size;i++)
    cin>>a[i];
   divide(a,0,size);
   for(int i=0;i<size;i++)
    cout<<a[i]<<" ";
  }
  