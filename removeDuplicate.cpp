#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int static arr[10];
	int k=0;
	for(int i=0;i<n;i++){
		int flag=0;
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j])
             { 
             flag=1;
			 break; 
		}
	}   
	    if(flag==0)
		arr[k++]=a[i];

	}
	
	for(int i=0;i<k;i++) cout<<arr[i]<<"\n";

}