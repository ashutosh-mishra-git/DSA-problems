#include<bits/stdc++.h>
using namespace std;
int main(){
	  int n; cin>>n;
	  int a[n];
	  for (int i = 0; i < n; ++i)
	  {
	  	cin>>a[i];
	  }
	  for (int i = 0; i < n; ++i)
	  {
	  	if(a[i]>a[i+1]){
	  		int j=i;
	  		while(j>=0 && a[j]>a[j+1]){
                 swap(a[j],a[j+1]);
                   j--;
	  		}
	  	}
	  }
	  for (int i = 0; i < n; ++i)
	  {
	  	cout<<a[i]<<" ";
	  }
}