// For Sorted array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10];
    int num,size,i,v;
    int first=0,last=0,mid=0;
    
    cin>>size;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
        }
   
    cin>>num;
    first=0;
    last=size-1;
    mid=(first+last)/2;
    while(first<=last){
        if(num==a[mid])
        {
            v=a[mid];
            break;
            
        }
        else if(num>a[mid])
        {
            first=mid+1;
            mid=(first+last)/2;
        }
        else
        {
        
           last=mid-1; 
            mid=(first+last)/2;
        }
        
    }
    if(v==a[mid]){
        cout<<"value found at "<<mid+1;  

    }
  else
  {
     cout<<"Value not found";

  }
  
return 0;

     
  
}