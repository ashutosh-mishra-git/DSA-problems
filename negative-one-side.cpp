#include <iostream>
using namespace std;

int main() {
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int ar[n];
	int j=0;
	for(int i=0;i<n;i++){
	    if(a[i]<0){
	        ar[j++]=a[i];
	    }
	}
	for(int i=0;i<n;i++){
	    if(a[i]>=0){
	        ar[j++]=a[i];
	    }
	}
	    
	  for(int i=0;i<n;i++) cout<<ar[i]<<" ";  
	    
	
	return 0;
}